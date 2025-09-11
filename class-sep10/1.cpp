#include <iostream>
using namespace std;
class  templerun
    {
    private:
        int score;
    public:
        void left(void);
        void right(void);
        void getscore(void);
        templerun(void)
        {
            this-> score =0;
            cout<<"game started with score:"<<score<<endl;


        };
        friend void bonus(templerun* p6);
    };
    void templerun::left(void)
    {
      this-> score ++;
    }
    void templerun::right(void)
    {
      this-> score ++;
    }
    void templerun::getscore(void)
    {
        cout << "score is " << this-> score << endl;
    }
    // void bonus(class templerun p)
    // {
    //   this->
   void bonus(templerun* p6)
   {
    //   p6.score = p6.score + 5;
        p6->score = p6->score + 5;
   }

   int main() {
       templerun p1;
       p1.left();
       p1.right();
       p1.getscore();
       bonus(&p1);
       p1.getscore();
       return 0;
   }
