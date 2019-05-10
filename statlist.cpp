#include <list>
#include <iostream>
using namespace std;
#include <iterator>
#include <algorithm>
// I think this needs to be compiled with the C++11 libs
class statlist {
    public:
        float getmedain() {
            list<int> value2(value);
            value2.sort();
            if(value2.size() % 2 == 0) {
	            list<int>::iterator it = value2.begin();
                advance(it, (((value2.size()-1)/2)+1));
                int a;
                a=*it;
                int b;
                advance(it, 1);
                b=*it;
                // cout << a << endl;
                // cout << b << endl;
                // cout << (a+b) << endl;
                float returnvalue;
                returnvalue = (a+b);
                // cout << returnvalue;
                returnvalue = returnvalue/2;
                // cout << returnvalue;
                return returnvalue;
            }
            else {
	            list<int>::iterator it = value2.begin();
                advance(it, ((value2.size()-1)/2));
                //cout << *it;
                float returnvalue = *it;
                return returnvalue;
            };
        }
        statlist(int initvalue) { // Initvalue is the init value to init the list.
            value.push_front(initvalue);
        };
        void getlist() {
            cout << endl;
            for (list<int>::iterator it=value.begin(); it != value.end(); ++it) { // yes this was copied from <http://www.cplusplus.com/reference/list/list/begin/>
                cout << ' ' << *it;
            };
            cout << endl;
        };
        float getmean() {
            float returnvalue;
            for (list<int>::iterator it=value.begin(); it != value.end(); ++it) { // yes this was copied from <http://www.cplusplus.com/reference/list/list/begin/>
                returnvalue=returnvalue+*it;
            };
            returnvalue = returnvalue/value.size();
            return returnvalue;
        };
        int getmode() {
            int a;
            int *b;
            int c;
            int *d;
            int e;
            int i;
            int highestvalue;
            highestvalue=0;
            int heldby;
            heldby=0;
            a=0;
            bool flag;
            flag=false;
            for (list<int>::iterator it=value.begin(); it != value.end(); ++it) { // yes this was copied from <http://www.cplusplus.com/reference/list/list/begin/>
                while(flag==false) {
                    if(b[c,0]==*it) {
                        b[c,1]==b[c,1]+1;
                        flag=true;
                    }
                    else if(c==(a+1)) {
                        b[c,0]=*it;
                        b[c,1]=1;
                        a=a+1;
                        flag=true;
                    }
                    else {
                        c=c+1;
                    };
                };
                c=0;
                flag=false;
            };
            highestvalue=0;
            c=0;
            e=0;
            int f;
            f=0;
            i=0;
            while(flag==false) {
                while(i<a) {
                    while(c<a) {
                        if(b[c,1]>highestvalue) {
                            bool flag2;
                            int h;
                            h=0;
                            flag2=false;
                            while(flag2==false) {
                                if(h==f+1) {
                                    flag2=true;
                                }
                                else {
                                    d[h]=NULL;
                                    h=h+1;
                                };
                            };
                            d[0]=b[c,0];
                            f=0;
                            highestvalue=b[c,1];
                        }
                        else if(b[c,1]==highestvalue) {
                            d[(f+1)]=b[c,0];
                            f=f+1;
                        };
                        c=c+1;
                    };
                    i=i+1;
                };
            };
        };
        list<int> value; // this feels inefficent
        //float medain = getmedain();
        //int medainI = getmedainasint();
};
