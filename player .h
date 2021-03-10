#include <string>

class player {

    private:

        std::string _Name;
        int _meilleurscore1;
        int _meilleurscore2;
        int _meilleurscore3;
        int _meilleurscore4;
        int _meilleurscore5;

    public:

        void getName(std::string _Name);
        void getmeilleurscore(int _meilleurscore1,int _meilleurscore2,int _meilleurscore3,int _meilleurscore4,int _meilleurscore5);
        void updateName(std::string _Name);
        void updatemeilleurscore(int _meilleurscore1,int _meilleurscore2,int _meilleurscore3,int _meilleurscore4,int _meilleurscore5);
        player(); 
        player(std::string _Name,int meilleurscore1,int meilleurscore2,int meilleurscore3,int meilleurscore4,int meilleurscore5,); 
}