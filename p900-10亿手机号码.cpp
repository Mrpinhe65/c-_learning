#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>

using namespace std;

// 生成并写入文件(模拟10亿个号码)
void generateData(const string &filename,long long numCount)
{
    ofstream outFile(filename);
    for(long long i=0;i<numCount;i++)
    {
        //随机生成11位手机号码
        outFile<<13800000000+rand()%1000000000<<endl;
    }
    outFile.close();
}

// 读取文件并排序(外部排序的简化版)
void sortFile(const string &inputFile,const string &outputFile)
{
    const size_t bufferSize=10000000; // 每次加载到内存的手机号数量
    vector<long long>buffer;
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    long long number;
    while(inFile>>number)
    {
        buffer.push_back(number);
        if(buffer.size()>=bufferSize)
        {
            sort(buffer.begin(),buffer.end());
            for(const auto &num:buffer)
            {
                outFile<<num<<endl;
            }
            buffer.clear();
        }

    }
    if(!buffer.empty())
    {
        sort(buffer.begin(),buffer.end());
        for(const auto &num:buffer)
        {
            outFile<<num<<endl;
        }
        inFile.close();
        outFile.close();
    }
}

// 进行差值编码
void deltaEncode(const string &inputFile,const string &outputFile)
{
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    long long prevNumber,currentNumber;
    if(inFile>>prevNumber)
    {
        outFile<<prevNumber<<endl; // 存储第一个号码
        while(inFile>> currentNumber)
        {
            long long diff=currentNumber-prevNumber;
            outFile<<diff<<endl; // 存储差值
            prevNumber=currentNumber;
        }
    }
    inFile.close();
    outFile.close();
}

// 解码差值
void deltaDecode(const string &inputFile,const string &outputFile)
{
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    long long prevNumber,diff;
    if(inFile>>prevNumber)
    {
        outFile<<prevNumber<<endl;
        while(inFile>>diff)
        {
            prevNumber+=diff;
            outFile<<prevNumber<<endl;
        }
    }
    inFile.close();
    outFile.close();
}

int main(int argc,char *argv[],char* envp[])
{
    string inputFile="phones.txt";
    string sortedFile="phones_sorted.txt";
    string encodedFile="phones_encoded.txt";
    string decodedFile="phones_decoded.txt";

    // 生成测试数据：10亿个手机号码(为了便于演示，仅使用100万个)
    generateData(inputFile,1000000);

    // 外部排序
    sortFile(inputFile,sortedFile);

    // 差值编码
    deltaEncode(sortedFile,encodedFile);

    // 差值解码
    deltaDecode(encodedFile,decodedFile);

    cout<<"Processing completed!"<<endl;

    return 0;
}
