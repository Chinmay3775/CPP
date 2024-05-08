//IMPLEMENTATION OF CLASS MATRIX 
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int x[3][3];
    public:
        Matrix();
        Matrix(Matrix &);
        ~Matrix(){}
        void setData();
        void display();
        Matrix add(Matrix &);
        Matrix sub(Matrix &);
        Matrix mul(Matrix &);
        void transpose();
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
Matrix Matrix::add(Matrix &t)
{
    int i,j;
    Matrix q;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            q.x[i][j]=x[i][j]+t.x[i][j];
        }
    }
    return q;
}
Matrix Matrix::sub(Matrix &t)
{
    int i,j;
    Matrix q;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            q.x[i][j]=x[i][j]-t.x[i][j];
        }
    }
    return q;
}
Matrix Matrix::mul(Matrix &t)
{
    int i,j,k;
    Matrix q;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                q.x[i][j]+=(x[i][j]*t.x[i][j]);
            }
        }
    }
    return q;
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
    c=a.sub(b);
    a.display();
    b.display();
    c.display();
    c.transpose();
    c.display();
    return 0;
}