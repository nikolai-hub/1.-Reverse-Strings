#include <iostream>
#include <string>
#include <stack>
#include <sstream>

std::stack<std::string> readInput() {
    std::stack<std::string> sentense;
    std::string input;
    std::getline(std::cin, input);
    std::istringstream istr(input);
    std::string word;
    
    while (istr >> word)
    {
        sentense.push(word); 
      

    }
    return sentense;

}

void print(std::stack<std::string> sentense) {
    std::stack<std::string> sentensoToPop = sentense;
    for (size_t i = 0; i < sentense.size(); i++)
    {
        std::cout << sentensoToPop.top() << " ";

        sentensoToPop.pop();
    }
}


int main()
{
    std::stack<std::string> sentense = readInput();
    print(sentense);

    return 0;
}
