#ifndef CLUB_H
#define CLUB_H

class Club 
{
  private :
    int goals;
    int wins;
  public :
    Club(int goals = 0, int wins = 0);
    void setValues(const int goals, const int wins);
    void print() const;
};

#endif