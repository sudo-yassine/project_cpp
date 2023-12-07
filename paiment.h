#ifndef PAIMENT_H
#define PAIMENT_H


class paiment
{
public:
    paiment(int travail , int spt , float bonus , float total);
    paiment();
    int gettravail() ;
    int getspt();
    float getbonus();
    float gettotal();
    void settravail(int travail);
    void setspt(int spt);
    void setbonus(float bonus);
    void settotal(float total);
    float paimentt() ;

private:
    int travail;
    int spt ;
    float bonus;
    float total ;
};

#endif // PAIMENT_H

