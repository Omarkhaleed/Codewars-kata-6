using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window){
    int sum=-1;
    if(h<=0 || window>=h || bounce<=0 || bounce>=1)
    return -1;
    else
    while(h>window){
    sum+=2;
    h=h*bounce;
    }
    return sum;
    }
};
