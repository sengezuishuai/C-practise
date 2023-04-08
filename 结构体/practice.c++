#include"all.h"
struct Student
{
    string name;
    double score;
};
struct Teacher
{
    string name;
    Student stu[5];
};

int main()
{
    Teacher tea[3];
    tea[0] = {"jack",{"shagou",78.3},{"shagou",78.3},{"shagou",78.3},{"shagou",78.3},{"shagou",78.3}};
    tea[1] = {"tom",{"hehe",98.4},{"hehe",98.4},{"hehe",98.4},{"hehe",98.4},{"hehe",98.4}};
    tea[2] = {"timi",{"wangzhe",100},{"wangzhe",100},{"wangzhe",100},{"wangzhe",100},{"wangzhe",100}};
    for(int i = 0;i < 3;i++)
    {
        cout << "讲师名字是" << tea[i].name <<endl;
        for(int j = 0;j < 5;j++)
        {
            cout << "同学的名字是" + tea[i].stu[j].name << "同学的分数是"  << tea[i].stu[j].score << endl;
        }
    }
}