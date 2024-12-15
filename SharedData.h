#ifndef __SHARED__DATA_H__
#define __SHARED__DATA_H__

class SharedData
{
public:
    static SharedData* getInstance();

    int UsersMoney;    //��ҵ�Ǯ
    bool SceneAccess[3];    //ÿ���ؿ��ķ���Ȩ��
    bool SceneSuccess[3];    //ÿ���ؿ��Ƿ�ʤ��
    int SceneFinishedGroups[3];    //ÿ���ؿ�����ɵ�����

private:
    SharedData();
    ~SharedData();
    static SharedData* _instance;
};

#endif // __SHARED__DATA_H__