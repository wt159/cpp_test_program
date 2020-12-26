#include <iostream>
#include <string>

class Sales_data {
public:
    std::string bookNum;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(void)
{
    Sales_data data1, data2;
    double price = 0;
    //读入代码
    std::cin >> data1.bookNum >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNum >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    //检查代码,相同就求和
    if(data1.bookNum == data2.bookNum)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        if(0 != totalCnt)
        {
            std::cout << totalRevenue/totalCnt << std::endl;
        }
        else
        {
            std::cout << "(no class)" << std::endl;
            return 0;
        }
        
    }
    else
    {
        std::cerr << "Data must refer to th same ISBN" 
                    << std::endl;
        return -1;
    }
    
    return 0;
}