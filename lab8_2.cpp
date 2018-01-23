#include <iostream>

using namespace std;

int main () {

        //char citty[] = {'A','B','C','\0'};
        //char citty2[2][] = {"ABC","CDE"};//ABC
                                        //CDE

        char name[] = {"Yuwadee"};//eedawuY
        int nameLength = 7;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        char revName[nameLength+1];

            for (int i = 0; i < nameLength; i++){
                revName [1] = name[6-i];
            }
        revName [nameLength] = '\0';
        cout << revName << endl;

        //revName [0] += 1;
        for (int i = 0; i < nameLength; i++){
            revName[i] = revName [i] + 1;
        }

        cout << revName;

        //revName[0] = name[5];
        //revName[1] = name[4];
        //revName[2] = name[3];
        //revName[3] = name[2];
        //revName[4] = name[1];
        //revName[5] = name[0];

        return 0;
}
