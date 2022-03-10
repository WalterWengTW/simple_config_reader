#include "simple_config.h"


int main()
{

    CFG* config = new CFG();

    config->cfgRead();

    std::cout << "Item1 : " << config->get<int>("Item1") << std::endl;
    std::cout << "Item2 : " << config->get<double>("Item2") << std::endl;
    std::cout << "Item3 : " << config->get<std::string>("Item3") << std::endl;


    std::cout << "==========================================\n" << std::endl;
    std::cout << "Add Item4" << std::endl;
    config->add("Item4", -0.2);

    std::cout << "Item4 : " << config->get<double>("Item4") << std::endl;

    std::cout << "==========================================\n" << std::endl;
    std::cout << "Remove Item4" << std::endl;
    config->rm("Item4");
    if(!config->isKeyExists("Item4"))
        std::cout << "Item4 is not existed." << std::endl;

    std::cout << "==========================================\n" << std::endl;
    std::cout << "Modify Item2" << std::endl;
    config->modify("Item2", -2.5);
    std::cout << "Item2 : " << config->get<double>("Item2") << std::endl;

    std::cout << "==========================================\n" << std::endl;
    std::cout << "Modify Item2" << std::endl;
    config->modify("Item2", 0.5);
    std::cout << "Item2 : " << config->get<double>("Item2") << std::endl;



    return 0;
}
