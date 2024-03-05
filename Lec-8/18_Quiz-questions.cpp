#include<iostream>
using namespace std;

/*
void update(int a){
    a = a / 2;
}

int main() {
    int a = 10;
    update(a);
    cout<< a << endl;//a remains same coz function hasn't returned anything
}//(output:10)
*/

/*
int update(int a){
    a -= 5;//copy of a 
    return a;
}

int main() {
    int a = 15;
    update(a);
    cout<< a << endl;//a remains same(output:15)
}
*/


int update(int a){
    int ans = a * a;//new variale is created
    return ans;
}

int main() {
    int a = 14;
    a = update(a);//calling fucntion and storing it's return in a
    cout<< a << endl;//(output:196)
}

