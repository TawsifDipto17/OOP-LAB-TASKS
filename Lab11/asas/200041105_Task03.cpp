
#include <iostream>
#include <string>
#include<typeinfo>
#include<fstream>
using namespace std;

enum class Animal_type {tCat,tDog};
class Animal
{
protected:
    string name;
    double height;
    double weight;
    static int n;
    static Animal * arrap[];
public:
    virtual void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Weight: ";
        cin >> weight;
    }
    virtual void setData()
    {
        cout << "\n Name: " << name;
        cout << "\n Height: " << height;
        cout << "\n Weight: " << weight;
    }
    virtual Animal_type getType();
    static void add();
    static void display();
    static void read();
    static void write();
};
int Animal::n;
Animal* Animal::arrap[100];

class cat:public Animal
{
private:
    string sz;
public:
    void getData()
    {
        Animal:: getData();
        cout << "Enter size: ";
        cin >> sz;
    }
    void setData()
    {
        Animal::setData();
        cout << "\n Size: " << sz;
    }
};
class dog:public Animal
{
private:
    int cnt;
public:
    void getData()
    {
        Animal::getData();
        cout << "Enter seat number: ";
        cin >> cnt;
    }
    void setData()
    {
        Animal::setData();
        cout << "\n Seat number: " << cnt;
    }
};
void Animal::add()
{
    char ch;
    cout << " 'C' to add a cat"
         "\n 'D' to add a dog"
         "\nEnter selection: ";
    cin >> ch;
    switch(ch)
    {
    case 'C' :
        arrap[n]=new cat;
        break;
    case 'D' :
        arrap[n]=new dog;
        break;
    default:
        cout << "Unknown Animal type\n";
        return;
    }
    arrap[n++]->getData();
}
void Animal::display()
{
    for(int j=0; j<n; j++)
    {
        cout << (j+1) << '\n';
        switch(arrap[j]->getType() )
        {
        case Animal_type::tCat:
            cout << ". Type: Cat";
            break;
        case Animal_type::tDog:
            cout << ". Type:Dog";
            break;
        default:
            cout << ". Unknown type";
        }
        arrap[j]->setData();
        cout << endl;
    }
}
Animal_type Animal::getType()
{
    if( typeid(*this) == typeid(cat) )
        return Animal_type::tCat;
    else if( typeid(*this)==typeid(dog) )
        return Animal_type::tDog;
    else
    {
        cerr << "\nInvalid type";
        exit(0);
    }
    return Animal_type::tCat;
}
void Animal::write()
{
    int size;
    cout << "Writing " << n << " Animals.\n";
    Animal_type ftype;
    ofstream of;
    of.open("Animals.DAT", ios::trunc | ios::binary);
    if(!of)
    {
        cout << "\nCan't open file\n";
        return;
    }
    for(int j=0; j<n; j++)
    {
        ftype=arrap[j]->getType();
        of.write( (char*)&ftype, sizeof(ftype) );
        switch(ftype) //find its size
        {
        case Animal_type::tCat:
            size=sizeof(cat);
            break;
        case Animal_type::tDog:
            size=sizeof(dog);
            break;
        }
        of.write(  (char*)(arrap[j]), size );
        if(!of)
        {
            cout << "\nCan't write to file\n";
            return;
        }
    }
}


void Animal::read()
{
    int size;
    Animal_type ftype;
    ifstream inf; //open ifstream in binary
    inf.open("Animals.DAT", ios::binary);
    if(!inf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0;
    while(true)
    {
        inf.read((char*)&ftype,sizeof(ftype));
        if( inf.eof() )
            break;
        if(!inf) //error reading type
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        switch(ftype)
        {
        
        case Animal_type::tCat: 
            arrap[n] = new cat;
            size=sizeof(cat);
            break;
        case Animal_type::tDog:
            arrap[n] = new dog;
            size=sizeof(dog);
            break;
        default:
            cout << "\nUnknown type in file\n";
            return;
        }

        inf.read( (char*)arrap[n], size );
        if(!inf) //error but not eof
        {
            cout << "\nCan't read data from file\n";
            return;
        }
        n++;
    }
    cout << "Reading " << n << " Animals\n";
}
int main()
{
    char ch;
    while(true)
    {
        cout << "'a' -- add data for an Animal"
             "\n'd' -- display data for all Animals"
             "\n'w' -- write all Animal data to file"
             "\n'r' -- read all Animal data from file"
             "\n'x' -- exit"
             "\nEnter selection: ";
        cin >> ch;
        switch(ch)
        {
        case 'a':
            Animal::add();
            break;
        case 'd': 
            Animal::display();
            break;
        case 'w': 
            Animal::write();
            break;
        case 'r': 
            Animal::read();
            break;
        case 'x':
            exit(0); 
        default:
            cout << "\nUnknown command";
        }
    }
    return 0;
}