#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Node{
    public:
    string url;
    Node* prev;
    Node* next;
};

// you just need to implement the BrowserHistory class below
class BrowserHistory {
    // your code here
public:
    
    BrowserHistory(string homepage) {
       // your code here
        Node* head=new Node;
       head->url=homepage;
    }

    void visit(string url) {
        // your code here
        Node *temp=new Node;
        temp->url=url;
        
    }

    string back(int steps) {
        // your code here
        return "";
    }

    string forward(int steps) {
        // your code here
        return "";
    }
};

int main() {
    int n;
    cin >> n; 
    string operation, url;
    int steps;

    // please do not change below code
    BrowserHistory browserHistory("chaicode.com");
    
    string result = "chaicode.com ";
    for (int i = 0; i < n; i++) {
        cin >> operation;

        if (operation == "visit") {
            cin >> url;
            browserHistory.visit(url);
            result += url + " ";
        } else if (operation == "back") {
            cin >> steps;
            result += browserHistory.back(steps) + " ";
        } else if (operation == "forward") {
            cin >> steps;
            result += browserHistory.forward(steps) + " ";
        }
    }
    
    cout << result.substr(0, result.size() - 1);

    return 0;
}