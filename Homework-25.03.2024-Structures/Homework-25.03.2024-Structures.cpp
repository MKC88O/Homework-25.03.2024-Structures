// Homework-25.03.2024-Structures.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <ctime>

using namespace std;
struct Shop
{
    string name;
    string adres;
    string kassirName;
};

struct Product 
{
    string name;
    double price = 0;
    double quantity = 0;
    double discount = 0;
    
};

struct Check 
{
    Shop shop;
    Product products[100]; 
    int productsQuantity = 0; 

    void addProducts(string name, double quantity, double price, double discount) 
    {
        products[productsQuantity].name = name;
        products[productsQuantity].quantity = quantity;
        products[productsQuantity].price = price;
        products[productsQuantity].discount = discount;
        productsQuantity++;
    }

    void PrintCheck()
    {
        Product product;
        Shop shop;
        shop.name = "ATB";
        shop.kassirName = "Ivan Ivanov";
        shop.adres = "vul. Balkivs'ka, 143a, m.Odesa.";
        double Total = 0;

        cout << "++++++++++++++++++"<< shop.name <<"++++++++++++++++++\n";
        cout << "------------Laskavo Prosymo------------\n";
        cout << "Kassir: " << shop.kassirName << "\n";
        cout << "Time: 03.04.2024 16:22:43" << "\n";
        cout << "Adres: " << shop.adres << "\n";
        cout << "*****************CHECK*****************\n";
        cout << "---------------------------------------\n";
        
        for (int i = 0; i < productsQuantity; i++)
        {
            product = products[i];
            double totalPrice = product.quantity * product.price * (1 - product.discount / 100);
            cout << "Product: " << product.name << "\n";
            cout << "Price: " << product.price << " grn." << "\n";
            cout << "Quantity: " << product.quantity << " sht." << "\n";
            cout << "Discount: " << product.discount << "%" << "\n";
            cout << "Total price: " << totalPrice << " grn." << "\n";
            cout << "---------------------------------------\n";
            Total += totalPrice;
        }
        cout << "TOTAL: " << Total << " grn." << "\n";
        cout << "***************************************\n";
        cout << "---------Dyakuemo za pokupku!----------\n";
        cout << "------------Zahod`te shche!------------\n";
        cout << "+++++++++++++++++++++++++++++++++++++++\n";
    }
};



int main() {
    Check check;
    check.addProducts("Mivina", 200, 10, 10);
    check.addProducts("Pivko", 50, 40, 0);
    check.addProducts("Hleb", 1, 25, 0);
    check.addProducts("Nescafe GOLD", 1, 250, 20);
    check.addProducts("Paket ATB", 1, 1.5, 0);
    check.PrintCheck();
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
