#include <iostream>

int main() {
    std::string yourName;
    std::string dateName;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, yourName);
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, dateName);
    
    std::cout << "Dear " << dateName << ",\n\n";
    std::cout << "I hope this message finds you well. I've been wanting to get to know you better, and I was wondering if you would like to go on a date with me. I think it would be a great opportunity for us to spend some quality time together.\n\n";
    std::cout << "Please let me know your thoughts. I will be looking forward to your response.\n\n";
    std::cout << "Best regards,\n" << yourName;
    
    return 0;
}