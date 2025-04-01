#include <iostream>
using namespace std;

class CPU
{
public:
    virtual void calculator() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    ~Computer()
    {
        if (m_cpu != nullptr)
        {
            m_cpu = nullptr;
        }
        if (m_vc != nullptr)
        {
            m_vc = nullptr;
        }
        if (m_mem != nullptr)
        {
            m_mem = nullptr;
        }
    }

    void work()
    {
        m_cpu->calculator();
        m_vc->display();
        m_mem->storage();
    }

private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

class IntelCpu : public CPU
{
public:
    void calculator()
    {
        cout << "IntelCpu running!" << endl;
    }
};

class IntelVideo : public VideoCard
{
public:
    void display()
    {
        cout << "IntelVideo displaying!" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    void storage()
    {
        cout << "IntelMemory storaging! " << endl;
    }
};

class LenovoCpu : public CPU
{
public:
    void calculator()
    {
        cout << "LenovoCpu running!" << endl;
    }
};

class LenovoVideo : public VideoCard
{
public:
    void display()
    {
        cout << "LenovoVideo displaying!" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    void storage()
    {
        cout << "LenovoMemory storaging! " << endl;
    }
};
void test01()
{
    CPU *intelCpu = new IntelCpu;
    VideoCard *intelVideo = new IntelVideo;
    Memory *intelStorage = new IntelMemory;

    Computer *computer1 = new Computer(intelCpu, intelVideo, intelStorage);
    computer1->work();

    delete computer1;

    /* ok 更好的方案->在类Computer中构建析构函数释放
    delete intelCpu;
    delete intelVideo;
    delete intelStorage;
    */

    Computer *computer2 = new Computer(new LenovoCpu, new LenovoVideo, new LenovoMemory);
    computer2->work();
    delete computer2;
    Computer *computer3 = new Computer(new LenovoCpu, new IntelVideo, new LenovoMemory);
    computer3->work();
    delete computer3;
}
int main(int argc, char *argv[], char *envp[])
{
    test01();
    return 0;
}
