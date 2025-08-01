#include<iostream>
using namespace std;

class Product {
public:
    string productName;
    void setProduct(string name) {
        productName = name;
    }
};

class Vendor {
public:
    string vendorName;
    void setVendor(string name) {
        vendorName = name;
    }
};

class Inventory : public Product, public Vendor {
public:
    void showInventory() {
        cout << "Product: " << productName << ", Vendor: " << vendorName << endl;
    }
};

int main() {
    Inventory inv;
    inv.setProduct("Laptop");
    inv.setVendor("TechStore");
    inv.showInventory();
    return 0;
}