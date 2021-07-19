#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

int main() {

    string hech;
    string none;
    string index;
    string to;
    string address;
    string value;
    string gas;
    string gprice;
    string input;
    string reciept;
    string used;
    string contr;
    string root;
    string status;
    string time;
    string number;
    string bhach;

    string line;
    set<string> storage;
    set<string> del;

    ifstream Uni;
    Uni.open("Uni.csv");
    if (Uni.is_open()) cout << "File of uni is open" << endl;
    while (getline(Uni, line)) {
        Uni >> hech;
        Uni >> none;
        Uni >> index;
        Uni >> address;
        Uni >> to;
        Uni >> value;
        Uni >> gas;
        Uni >> gprice;
        Uni >> input;
        Uni >> reciept;
        Uni >> used;
        Uni >> contr;
        Uni >> root;
        Uni >> status;
        Uni >> time;
        Uni >> number;
        Uni >> bhach;
        storage.insert(address);
    }

    ifstream Sushi;
    Sushi.open("Sushi.csv");
    if (Sushi.is_open()) cout << "File of Sushi is open" << endl;
    while (getline(Sushi, line)) {
        Sushi >> hech;
        Sushi >> none;
        Sushi >> index;;
        Sushi >> address;
        Sushi >> to;
        Sushi >> value;
        Sushi >> gas;
        Sushi >> gprice;
        Sushi >> input;
        Sushi >> reciept;
        Sushi >> used;
        Sushi >> contr;
        Sushi >> root;
        Sushi >> status;
        Sushi >> time;
        Sushi >> number;
        Sushi >> bhach;
        storage.insert(address);
    }

    ifstream Yearn;
    Yearn.open("Yearn.csv");
    if (Yearn.is_open()) cout << "File of Yearn is open" << endl;
    while (getline(Yearn, line)) {
        Yearn >> hech;
        Yearn >> none;
        Yearn >> index;
        Yearn >> address;
        Yearn >> to;
        Yearn >> value;
        Yearn >> gas;
        Yearn >> gprice;
        Yearn >> input;
        Yearn >> reciept;
        Yearn >> used;
        Yearn >> contr;
        Yearn >> root;
        Yearn >> status;
        Yearn >> time;
        Yearn >> number;
        Yearn >> bhach;
        storage.insert(address);
    }

    ifstream Comp;
    Comp.open("Comp.csv");
    if (Comp.is_open()) cout << "File of Comp is open" << endl;
    while (getline(Comp, line)) {
        Comp >> hech;
        Comp >> none;
        Comp >> index;
        Comp >> address;
        Comp >> to;
        Comp >> value;
        Comp >> gas;
        Comp >> gprice;
        Comp >> input;
        Comp >> reciept;
        Comp >> used;
        Comp >> contr;
        Comp >> root;
        Comp >> status;
        Comp >> time;
        Comp >> number;
        Comp >> bhach;
        storage.insert(address);
    }

    ifstream Aave;
    Aave.open("Aave.csv");
    if (Aave.is_open()) cout << "File of Aave is open" << endl;
    while (getline(Aave, line)) {
        Aave >> hech;
        Aave >> none;
        Aave >> index;
        Aave >> address;
        Aave >> to;
        Aave >> value;
        Aave >> gas;
        Aave >> gprice;
        Aave >> input;
        Aave >> reciept;
        Aave >> used;
        Aave >> contr;
        Aave >> root;
        Aave >> status;
        Aave >> time;
        Aave >> number;
        Aave >> bhach;
        storage.insert(address);
    }

    ifstream Alch;
    Alch.open("Alch.csv");
    if (Alch.is_open()) cout << "File of Alch is open" << endl;
    while (getline(Alch, line)) {
        Alch >> hech;
        Alch >> none;
        Alch >> index;
        Alch >> address;
        Alch >> to;
        Alch >> value;
        Alch >> gas;
        Alch >> gprice;
        Alch >> input;
        Alch >> reciept;
        Alch >> used;
        Alch >> contr;
        Alch >> root;
        Alch >> status;
        Alch >> time;
        Alch >> number;
        Alch >> bhach;
        storage.insert(address);
    }

    ifstream inch;
    inch.open("1inch.csv");
    if (inch.is_open()) cout << "File of inch is open" << endl;
    while (getline(inch, line)) {
        inch >> hech;
        inch >> none;
        inch >> index;
        inch >> address;
        inch >> to;
        inch >> value;
        inch >> gas;
        inch >> gprice;
        inch >> input;
        inch >> reciept;
        inch >> used;
        inch >> contr;
        inch >> root;
        inch >> status;
        inch >> time;
        inch >> number;
        inch >> bhach;
        storage.insert(address);
    }

    ifstream x;
    x.open("0x.csv");
    if (x.is_open()) cout << "File of x is open" << endl;
    while (getline(x, line)) {
        x >> hech;
        x >> none;
        x >> index;
        x >> address;
        x >> to;
        x >> value;
        x >> gas;
        x >> gprice;
        x >> input;
        x >> reciept;
        x >> used;
        x >> contr;
        x >> root;
        x >> status;
        x >> time;
        x >> number;
        x >> bhach;
        storage.insert(address);
    }

    ifstream Curve;
    Curve.open("Curve.csv");
    if (Curve.is_open()) cout << "File of Curve is open" << endl;
    while (getline(Curve, line)) {
        Curve >> hech;
        Curve >> none;
        Curve >> index;
        Curve >> address;
        Curve >> to;
        Curve >> value;
        Curve >> gas;
        Curve >> gprice;
        Curve >> input;
        Curve >> reciept;
        Curve >> used;
        Curve >> contr;
        Curve >> root;
        Curve >> status;
        Curve >> time;
        Curve >> number;
        Curve >> bhach;
        storage.insert(address);
    }

    ifstream Balancer;
    Balancer.open("Balancer.csv");
    if (Balancer.is_open()) cout << "File of Balancer is open" << endl;
    while (getline(Balancer, line)) {
        Balancer >> hech;
        Balancer >> none;
        Balancer >> index;
        Balancer >> address;
        Balancer >> to;
        Balancer >> value;
        Balancer >> gas;
        Balancer >> gprice;
        Balancer >> input;
        Balancer >> reciept;
        Balancer >> used;
        Balancer >> contr;
        Balancer >> root;
        Balancer >> status;
        Balancer >> time;
        Balancer >> number;
        Balancer >> bhach;
        storage.insert(address);
    }

    ifstream Maker;
    Maker.open("Maker.csv");
    if (Maker.is_open()) cout << "File of Maker is open" << endl;
    while (getline(Maker, line)) {
        Maker >> hech;
        Maker >> none;
        Maker >> index;
        Maker >> address;
        Maker >> to;
        Maker >> value;
        Maker >> gas;
        Maker >> gprice;
        Maker >> input;
        Maker >> reciept;
        Maker >> used;
        Maker >> contr;
        Maker >> root;
        Maker >> status;
        Maker >> time;
        Maker >> number;
        Maker >> bhach;
        storage.insert(address);
    }

    ifstream Gitcoin;
    Gitcoin.open("Gitcoin.csv");
    if (Gitcoin.is_open()) cout << "File of Gitcoin is open" << endl;
    while (getline(Gitcoin, line)) {
        Gitcoin >> hech;
        Gitcoin >> none;
        Gitcoin >> index;
        Gitcoin >> address;
        Gitcoin >> to;
        Gitcoin >> value;
        Gitcoin >> gas;
        Gitcoin >> gprice;
        Gitcoin >> input;
        Gitcoin >> reciept;
        Gitcoin >> used;
        Gitcoin >> contr;
        Gitcoin >> root;
        Gitcoin >> status;
        Gitcoin >> time;
        Gitcoin >> number;
        Gitcoin >> bhach;
        storage.insert(address);
    }

    ifstream Badger;
    Badger.open("Badger.csv");
    if (Badger.is_open()) cout << "File of Badger is open" << endl;
    while (getline(Badger, line)) {
        Badger >> hech;
        Badger >> none;
        Badger >> index;
        Badger >> address;
        Badger >> to;
        Badger >> value;
        Badger >> gas;
        Badger >> gprice;
        Badger >> input;
        Badger >> reciept;
        Badger >> used;
        Badger >> contr;
        Badger >> root;
        Badger >> status;
        Badger >> time;
        Badger >> number;
        Badger >> bhach;
        storage.insert(address);
    }

    ifstream Del;
    Del.open("Del.csv");
    if (Del.is_open()) cout << "File of Del is open" << endl;
    while (getline(Del, line)) {
        Del >> address;
        del.insert(address);
    }

    cout << "Storage is full" << endl;

    ofstream output;
    output.open("output.csv");
    if (output.is_open()) cout << "File of output is open" << endl;

    for (auto &it:storage)
        //if (!del.count(it))
        output << it << ",200" << endl;

    Uni.close();
    Sushi.close();
    Yearn.close();
    Comp.close();
    Aave.close();
    Alch.close();
    inch.close();
    x.close();
    Curve.close();
    Balancer.close();
    Maker.close();
    Gitcoin.close();
    Badger.close();
    Del.close();
    output.close();

    std::cout << "End of program" << std::endl;
    return 0;
}
