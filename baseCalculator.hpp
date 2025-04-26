#include <string>
#include <vector>

//arranged according to order of operation precedence
enum OP {SUB = 0, ADD = 1, DIV = 2, MUL = 3, EXP = 5};

bool isCharOp(char inp) {
    return (
        inp == '+' || inp == '-' || inp == 'x' ||
        inp == '/' || inp == '^'
        );
}

OP getOPCode(char inp) {
    return SUB;
}


int readSyntax(std::string buffer) {
    const unsigned short int bufferSize = buffer.size();
    bool isDecimalinNum = false;
    std::string inpNum = "";
    std::vector<int> inputs;
    std::vector<OP> ops;

    for(int i = 0; i < bufferSize; i++) {
        if(inpNum == "" && isCharOp(buffer[i])) {
            return 0;
        }

        if(isDecimalinNum && buffer[i] == '.') {
            return 0;
        } else {
            inpNum += buffer[i];
        }


        if(i + 1 == bufferSize || isCharOp(buffer[i])) {
            inputs.push_back(std::stoi(inpNum));
            isDecimalinNum = false;
            inpNum = "";
        }
    }

    return 1;
}
