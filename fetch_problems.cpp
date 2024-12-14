#include <iostream>
#include <curl/curl.h>
#include <string>
#include <fstream>

// Callback function for handling the response from cURL
static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// Function to fetch data from a URL
std::string fetchURL(const std::string& url) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "Mozilla/5.0 (Windows NT 10.0; Win64; x64)");
        
        // Perform the request
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "cURL error: " << curl_easy_strerror(res) << std::endl;
        }

        // Cleanup
        curl_easy_cleanup(curl);
    }
    return readBuffer;
}

// Function to extract data from the fetched HTML (simplistic parsing)
std::string extractProblemName(const std::string& html) {
    std::size_t start = html.find("<div class=\"title\">");
    if (start == std::string::npos) return "Unknown";

    start = html.find(">", start) + 1;
    std::size_t end = html.find("</div>", start);

    return html.substr(start, end - start);
}

int main() {
    // List of problem links
    std::string links[] = {
        "https://codeforces.com/problemset/problem/1/A",
        "https://codeforces.com/problemset/problem/4/A",
        "https://codeforces.com/problemset/problem/50/A"
    };

    // Create an output CSV file
    std::ofstream outputFile("Codeforces_Problems.csv");
    outputFile << "Problem Name,Problem Link\n";

    // Fetch and process each link
    for (const auto& link : links) {
        std::cout << "Fetching: " << link << std::endl;
        std::string html = fetchURL(link);

        if (!html.empty()) {
            std::string problemName = extractProblemName(html);
            outputFile << "\"" << problemName << "\",\"" << link << "\"\n";
        } else {
            outputFile << "\"Error fetching details\",\"" << link << "\"\n";
        }
    }

    outputFile.close();
    std::cout << "Details saved to Codeforces_Problems.csv" << std::endl;

    return 0;
}
