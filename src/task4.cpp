#include <task4.h>
#include <algorithm>

int cti(char i) {
    return (int) i - 48;
}

char itc(int i) {
    return (char) (48 + i);
}

char *sum(char *xx, char *yy) {
    std::string sum, x = xx, y = yy;
    unsigned long long shorter, longer;
    bool first_longer;
    if (x.size() >= y.size()) {
        longer = x.size();
        shorter = y.size();
        first_longer = true;
    } else {
        longer = y.size();
        shorter = x.size();
        first_longer = false;
    }
    //TODO: implement the case when longer == ULLONG_MAX (additional if?)
    sum.resize(longer+1);
    for (char &i : sum) {
        i = '0';
    }
    std::string x_new, y_new;
    if (first_longer) {
        for (int i = 0; i < longer-shorter; i++) {
            y_new += '0';
        }
        y_new += y;
        x_new = x;
    } else {
        for (int i = 0; i < longer-shorter; i++) {
            x_new += '0';
        }
        x_new += x;
        y_new = y;
    }
    unsigned long long
        sptr = sum.size()-1,
        xptr = x_new.size()-1,
        yptr = y_new.size()-1;
    for (unsigned long long i = x_new.size()-1; i <= x_new.size(); i--) {
        int tmp = cti(x_new[xptr]) + cti(y_new[yptr]) + cti(sum[sptr]);
        sum[sptr] = itc(tmp%10);
        if (tmp > 9) {
            sum[sptr-1] = itc(tmp/10);
        }
        sptr--;
        xptr--;
        yptr--;
    }
    if (sum[0]=='0') {
        sum.erase(std::find(sum.begin(), sum.end(), '0'));
    }
    char *sumptr =(char*) std::malloc(sum.size() * sizeof(char) + 1);
    for (int i = 0; i < sum.size(); i++) {
        *(sumptr+i) = sum[i];
    }
    *(sumptr+sum.size()) = '\0';
    std::printf("%x\n", sumptr);
    return sumptr;
}
