#include <task5.h>
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <typeinfo>

void split(char ***result, int *ctr, char *buf, char ch) {
    std::vector<std::string> res;
    std::string init = buf;
    std::vector<unsigned long long> div_pos;
    for (unsigned long long i = 0; i < init.size(); i++) {
        if (init[i] == ch) {
            div_pos.push_back(i);
        }
    }
    if (!div_pos.empty()) {
        if (div_pos[0] > 0) {
            res.push_back(init.substr(0, div_pos[0]));
            *(ctr) += 1;
        }
        for (unsigned long long i = 1; i < div_pos.size(); i++) {
            res.push_back(init.substr(div_pos[i - 1] + 1, div_pos[i] - div_pos[i - 1] - 1));
            *(ctr) += 1;
        }
        if (div_pos[div_pos.size() - 1] < init.size() - 1) {
            res.push_back(init.substr(div_pos[div_pos.size() - 1] + 1, init.size() - div_pos[div_pos.size() - 1] - 1));
            *(ctr) += 1;
        }
    }
    *(result) = (char**) malloc(res.size() * sizeof(char*));
    for (int i = 0; i < res.size(); i++) {
        *(*(result)+i) = (char*) malloc(res[i].size() * sizeof(char));
        for (int j = 0; j < res[i].size(); j++) {
            *(*(*(result)+i)+j) = res[i][j];
        }
    }
}
