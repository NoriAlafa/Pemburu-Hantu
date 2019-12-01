#ifndef KARAKTER_H
#define KARAKTER_H


class karakter
{
    public:
        void setAttackPower(int a){
        AttackPower = a;}

    protected:
        int attackPower;

    private:
};

class pocong : public karakter
{
public:
    void attack(){
    cout<<"pocong"<<attackPower<<endl;
    }
};
class kunti : public karakter
{
public:
    void attack(){
    cout<<"kunti"<<attackPower<<endl;
    }
};
#endif // KARAKTER_H
