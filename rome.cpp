#include <iostream>
#include <string>
using namespace std;

class building {
protected:
    string name;
public:
    building(string nom) : name(nom) {};

    string getname() {
        return name;
    }
};

class warehouse : building {
private:
    int wood, rocks, wheat;
public:
    warehouse(string n, int wo, int ro, int wh) : building(n), wood(wo), rocks(ro), wheat(wh) {};

    void printresources() {
        cout << "wood: " << wood << endl;
        cout << "rocks: " << rocks <<endl;
        cout << "wheat: " << wheat <<endl;
    }
};

class house : building {
private:
    int floors, inhabitants, servants;
public:
    house(string n, int fl, int in, int se) : building(n), floors(fl), inhabitants(in), servants(se) {};

    void printhouse() {
        cout << "floors: " << floors << endl;
        cout << "inhabitants: " << inhabitants << endl;
        cout << "servants: " << servants << endl;
    }
};

class temple : building {
private:
    string god;
    int priests;
public:
    temple(string n, string g, int pr) : building(n), god(g), priests(pr) {};

    void printhouse() {
        cout << "god: " << god << endl;
        cout << "priests: " << priests << endl;
    }
};

int main()
{
    building bw("magatzem");
    warehouse w(bw.getname(), 40, 50, 30);
    building bh("casa");
    house h(bh.getname(), 4, 3, 8);
    building bt("temple");
    temple t(bt.getname(), "deu", 7);

    cout << bw.getname() << endl;
    w.printresources();
    cout << endl;
    cout << bh.getname() << endl;
    h.printhouse();
    cout << endl;
    cout << bt.getname() << endl;
    t.printhouse();
}
