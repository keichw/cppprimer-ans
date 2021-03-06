#include "15_3.h"
#include <string>
using namespace std;

class Bulk_quote:public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const string &book,double p,size_t qty,double dis):Quote(book,p),min_qty(qty),discount(dis){}
    virtual double net_price(size_t cnt) const{
        if(cnt>=min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }

protected:
    size_t min_qty = 0;
    double discount = 0.0;
};