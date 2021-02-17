using namespace std;
#include <string>;
#include <cassert>;

class ChemicalCompound
{
    public:
        ChemicalCompound(string name, float abundance=0.);

        string getName() {return name;}

        float getAbundance() {return abundance;}
    
    private:
        string name;
        float abundance;
    

}