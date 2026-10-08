#include "Header1.h"
#include "Header2.h"
#include "Header3.h"

int main()
{
    Warehouse w("East Warehouse", 10, 20, 30);
    House h("Agripa's House", 2, 5, 10);
    Temple t("Mercury's Temple", 3, "Mercury");

    cout << "Warehouse name: " << w.getName() << std::endl;
    cout << "House name: " << h.getName() << std::endl;
    cout << "Temple name: " << t.getName() << std::endl;


    w.printResources();
    h.printHouse();
    t.printTemple();
}
