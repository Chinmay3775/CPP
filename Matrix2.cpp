//IMPLEMENTATION OF CLASS MATRIX 
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int x[3][3];
    public:
        Matrix();//default constructor
        Matrix(Matrix &);//copy constructor
        ~Matrix(){}//destrcutor
        void setData();
        void display();
        void transpose();
        void add(Matrix &,Matrix &);
        void sub(Matrix &,Matrix &);
        void mul(Matrix &,Matrix &);
};
Matrix::Matrix()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]==0;
        }
    }
}
Matrix::Matrix(Matrix &t)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]==t.x[i][j];
        }
    }
}
void Matrix::setData()
{
    int i,j;
    cout<<"\nMATRIX DATA:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>x[i][j];
        }
    }
}
void Matrix::display()
{
    int i,j;
    cout<<"\nMATRIX DATA:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<" "<<x[i][j];
           cout<<"\n";
        }
    }
}
void Matrix::add(Matrix &p,Matrix &q)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]=p.x[i][j]+q.x[i][j];
        }
    }   
}
void Matrix::sub(Matrix &p,Matrix &q)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]=p.x[i][j]-q.x[i][j];
        }
    }   
}
void Matrix::mul(Matrix &p,Matrix &q)
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]=0;
            for(k=0;k<3;k++)
            {
                x[i][j]+=(p.x[i][k]*q.x[k][j]);            }
        }
    } 
}
void Matrix::transpose()
{
    int i,j,tmp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tmp=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=tmp;
        }
    }
}
int main()
{
    Matrix a,b,c;
    a.setData();
    b.setData();
    c.add(a,b);
    a.display();
    b.display();
    c.display();
    c.transpose();
    c.display();
    return 0;
}