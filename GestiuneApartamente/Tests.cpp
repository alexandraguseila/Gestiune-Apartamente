#include "Tests.h"
#include "Cheltuiala.h"
#include "Repo.h"
#include <assert.h>
#include <string.h>

void testCheltuiala()
{
    char* gaz = new char[10];
    strcpy_s(gaz, 4,"gaz");
    Cheltuiala c1(1, 100, gaz);
    assert(c1.getApartament() == 1);
    assert(c1.getSuma() == 100);
    assert(strcmp(c1.getTip(), gaz) == 0);
    c1.setApartament(2);
    c1.setSuma(46);
    char* lumina = new char[10];
    strcpy_s(lumina,7, "lumina");
    //c1.setTip(lumina);
    assert(c1.getApartament() == 2);
    assert(c1.getSuma() == 46);
    //assert(strcmp(c1.getTip(), lumina) == 0);
    c1.~Cheltuiala();
    //assert(strcmp(c1.getTip(), NULL)==0);
}

void testRepo()
{
    char* gaz = new char[10];
    char* lumina = new char[10];
    strcpy_s(gaz,4, "gaz");
    strcpy_s(lumina,7, "lumina");
    Cheltuiala c1(1, 100, gaz);
    Cheltuiala c2(2, 50, lumina);
    Repo r;
    r.addCheltuiala(c1);
    r.addCheltuiala(c2);
    assert(r.getNrCheltuieli() == 2);
    assert(r.getCheltuiala(0).getApartament() == c1.getApartament());
    assert(r.getCheltuiala(0).getSuma() == c1.getSuma());
    assert(strcmp(r.getCheltuiala(0).getTip(), c1.getTip()) == 0);
    assert(r.getCheltuiala(0) == c1);

}

