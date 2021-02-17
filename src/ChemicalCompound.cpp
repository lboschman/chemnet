#include <string>
#include <cassert>

class ChemicalCompound
{
    public:
        ChemicalCompound(std::string name, float abundance=0.);

        std::string getName() {return name;}

        float getAbundance() {return abundance;}
    
    private:
        std::string name;
        float abundance;
    

};

int main()
{
    return 0;
}
