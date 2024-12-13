import requests
from openpyxl import Workbook
from datetime import datetime
from bs4 import BeautifulSoup

def get_problem_details(link):
    """
    Fetch problem details from a Codeforces problem link.
    """
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36"
    }
    try:
        response = requests.get(link, headers=headers)
        if response.status_code != 200:
            print(f"Failed to fetch page for {link}, status code: {response.status_code}")
            return None, None

        soup = BeautifulSoup(response.text, 'html.parser')

        # Extract problem name
        title_div = soup.find('div', class_='problem-statement')
        if title_div:
            problem_name = title_div.find('div', class_='title').text.strip()
        else:
            problem_name = "Unknown"

        # Extract difficulty
        rating_tag = soup.find('span', class_='problem-rating')
        difficulty = rating_tag.text.strip() if rating_tag else "Unknown"

        return problem_name, difficulty
    except Exception as e:
        print(f"Error fetching details for {link}: {e}")
        return None, None

def create_excel_sheet(links):
    """
    Create an Excel sheet with problem details.
    """
    # Initialize workbook
    wb = Workbook()
    ws = wb.active

    # Set sheet name to current date
    current_date = datetime.now().strftime("%Y-%m-%d")
    ws.title = current_date

    # Add column headers
    headers = ["Problem Name", "Problem Link", "Status", "Star", "Difficulty"]
    ws.append(headers)

    # Fetch problem details for each link and add to the sheet
    for link in links:
        print(f"Fetching details for {link}...")
        problem_name, difficulty = get_problem_details(link)
        if problem_name:
            ws.append([problem_name, link, "", "", difficulty])
        else:
            ws.append(["Error fetching details", link, "", "", ""])

    # Save the workbook
    wb.save("Codeforces_Problems.xlsx")
    print("Excel sheet created: Codeforces_Problems.xlsx")

if __name__ == "__main__":
    # Input: List of Codeforces problem links
     problem_links = [
         "https://codeforces.com/problemset/problem/2047/A",
         "https://codeforces.com/problemset/problem/2042/B",
         "https://codeforces.com/problemset/problem/2042/A",
         "https://codeforces.com/problemset/problem/2039/B",
        "https://codeforces.com/problemset/problem/2039/A",
       # Add more links here
     ]

     create_excel_sheet(problem_links)
