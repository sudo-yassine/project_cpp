#include "paiment.h"

paiment::paiment()
{
    travail=0 , spt=0 , total=0 , bonus =0 ;
}
paiment::paiment(int travail , int spt , float bonus , float total)
{
    this->travail=travail;
    this->spt=spt;
    this->bonus=bonus;
    this->total=total;
}

int paiment::gettravail()
{
    return travail ;
}
int paiment::getspt()
{
    return spt;
}
float paiment::getbonus()
{
    return bonus;
}
float paiment::gettotal()
{
    return total;
}
void paiment::settravail(int travail)
{
    this->travail=travail;

}
void paiment::setspt(int spt)
{
    this->spt=spt;

}
void paiment::setbonus(float bonus)
{
    this->bonus=bonus;
}
void paiment::settotal(float total)
{
  this->total=total;
}
float paiment::paimentt()
{
    /* paiment p ;
    if (p.travail<=10)
    {
        //p.total=p.travail * p.spt;
        p.bonus= (p.spt * 100.0) / 15 ;
        p.total = (p.travail * p.spt) + p.bonus ;}
    else
    { p.total=p.travail * p.spt;}
        return p.total ;*/
    if (travail>=10)
        {
            //total=p.travail * p.spt;
            bonus= (spt * 100.0) / 15 ;
            total = (travail * spt) + bonus ;}
        else
        { total=travail * spt;}
            return total ;

}
