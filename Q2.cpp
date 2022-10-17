
#include <iostream>
#include <math.h>

using namespace std;
int main() {
float Pa , Pb , Pc , counta , countb , countc;
float a , b , c;
cin>>counta>>countb>>countc>>Pa>>Pb>>Pc;
if(Pa>=Pb && Pa>=Pc){
    Pc=Pc/Pa;
    Pb=Pb/Pa;
    Pa=1;
    a=0;
    b=countb-Pb*counta;
    c=countc-Pc*counta;
}else if(Pb>=Pc && Pb>Pa){
    Pc=Pc/Pb;
    Pa=Pa/Pb;
    Pb=1;
    b=0;
    a=counta-Pb*countb;
    c=countc-Pb*countb;
}else{
    Pb=Pb/Pc;
    Pa=Pa/Pc;
    Pc=1;
    c=0;
    a=counta-Pc*countc;
    b=countb-Pc*countc;
}
cout<<a<<"\t"<<b<<"\t"<<c;
return 0;
}
