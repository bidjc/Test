#if 0
#include <stdio.h>

#include <string.h>
int main(void)

{

    char string[15];

    char *ptr;
    char c = 'r';



    strcpy(string, "This is a string");

    ptr = strrchr(string, c);

    if (ptr)

        printf("The character %c is at position: %d\n", c, ptr-string);

    else

        printf("The character was not found\n");

    return 0;

}
#endif





#if 0
//函数名: strspn

//功 能: 在串中查找指定字符集的子集的第一次出现

//用 法: int strspn(char *str1, char *str2);

//程序例:

//#include <stdio.h>

//#include <string.h>




int main(void)

{

    char *string1 = "this is huidu";

    char *string2 = "is ";





    char* test = strstr(string1, string2);
    printf("%d\n   %d\n   %d\n",strlen(string1),strlen(string2),strlen(test));
    printf("Character where strings differ is at position: \n%s\n", test+strlen(string2));

    return 0;

}
#endif



#if 0

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

int main(void)

{

    char input[16] = "abc,78,d,\"123\",1233";

    char *p;



    /* strtok places a NULL terminator

     in front of the token, if found */

    p = strtok(input, "\,\"");

    if (p) printf("%s\n", p);



    /* A second call to strtok using a NULL

     as the first parameter returns a pointer

     to the character following the token  */

    //    p = strtok(NULL, "\,\"");

    //    if (p) printf("%s\n", p);

    //    char* p = "15672342";
    //    int i = atoi(p);
    //    printf("i===%d\n",i);
    //    free(p);

    typedef struct info_SIM_5350 {
        char* mode_Manufacturer;        //生产商
        char* mode_model;               //型号
        char* mode_vision;              //版本号
        char* mode_imei;                //IMEI
        char* sim_number;               //号码
        float mode_csq;                //信号
    }SIM_5350_Info;
    SIM_5350_Info inf;

    inf.mode_Manufacturer = "1";
    inf.mode_model = "2";               //型号
    inf.mode_vision= "3";              //版本号
    inf.mode_imei= "4";                //IMEI
    inf.sim_number= "5";               //号码
    inf.mode_csq= 6;                //信号

    //    for(int i=0;i<4;i++)
    //    {
    //        printf("  %s \n",inf.mode_model);
    //    }
    char* test = NULL;
    //    test = NULL;
    const char* a = "a123456";
    test = (char*)malloc(strlen(a));
    strcat(test,a);
    printf("test = %s,%d\n",test,strlen(a));

    const char* ab = "a123456234";
    test = (char*)malloc(strlen(ab));
    strcat(test,a);
    printf("test = %s,%d\n",test,strlen(ab));

    return 0;

}
#endif





#if 0
#include <stdio.h>

#include <string.h>




int main(void)

{

    char *string1 = "this is huidu";

    char *string2 = "is ";





    char* test = strstr(string1, string2);
    printf("%d\n   %d\n   %d\n",strlen(string1),strlen(string2),strlen(test));
    printf("Character where strings differ is at position: \n%s\n", test+strlen(string2));

    return 0;

}

#endif





#if 0



#include <stdio.h>

#include <string.h>




int main(void)

{

    char s[1024];

    memset(s,0,strlen(s));


    if(s == NULL) {
        printf("s == NULL!,strlen(s) == %d\n",strlen(s));
    } else {
        printf("s Not NULL   s = %s,strlen(s) == %d\n",s,strlen(s));
    }

    return 0;

}



#endif





#if 0








#include <stdio.h>

#include <string.h>




int main(void)

{

    char *buffer=new char[10];
    float fp=333.3333;
    sprintf( buffer , "%f", fp );

    printf("s = %s\n",buffer);

    return 0;

}


#endif





#if 0


#include <stdio.h>

#include <string.h>



int main(void)

{

    int i = 0xffffffff;
    if(i & 0x0000)
        printf("i = %x\n",i);
    return 0;

}
#endif





#if 0
#include "QString"

#include <stdio.h>

#include <string.h>
void main()
{
    QString s;
    s.append("ERROR");
    if(s == "ERRR"){
        printf("ERROR\n");
    }else {
        printf("not error\n");
    }


}

#endif





#if 0


/*************************************************/
#include "QString"

#include <stdio.h>

#include <string.h>
enum NetworkProb
{
    /// 未知连接方式
    UnknownNetwork      = 0,
    /// 有线连接
    WiredCon               = 1,
    /// WIFI连接
    WifiCon                = 2,
    /// 拨号连接
    PppoeCon               = 3,

    ProbeOver               = 4,
};
int main()
{
    NetworkProb s;
    NetworkProb b;
    s = UnknownNetwork;
    b = NetworkProb((int)s+5);
    if(b == WiredCon)
        printf("WiredCon\n");
    else
        printf("no!!\n");
}
#endif





#if 0
///*************************************************/


#include "QString"

#include <stdio.h>
#include "QDebug"
#include <string.h>

int main()
{
    QString b;
    b.append("123123123");
    qDebug()<<"b = "<<b<<"b.count = "<<b.count();
    b.clear();
    qDebug()<<"b = "<<b<<"b.count = "<<b.count();
    b.append("123123123");
    qDebug()<<"b = "<<b<<"b.count = "<<b.count();


}


///*************************************************/
#endif





#if 0

#include "QString"

#include <stdio.h>
#include "QDebug"
#include <string.h>

int main()
{
    QString b,c;
    b.append("123 f");
    c.append("123 f");

    if(c == b) {
        printf("!!!12\n");
    } else {
        printf("not!!!\n");
    }


}



#endif





#if 0

/*************************************************/


#include "QString"

#include <stdio.h>
#include "QDebug"
#include <string.h>
enum ErrorType
{
    NO_ERROR            = 0x0,      //没有错误
    NoManufacturer      = 0x1,      //无法获取生产商
    NoVersion           = 0x2,      //无法获取版本
    NoModelType         = 0x4,      //无法获取型号
    NoIMEI              = 0x8,      //无法获取IMEI
    NoPhoneNumber       = 0x10,      //无法获取手机号码
    GetOperator         = 0x20,      //无法获取运营商
    NoSignalStrength    = 0x40,      //无法获取信号强度
    NoSimCardInsert     = 0x80,      //无法获取是否插卡
    NoStatus            = 0x100,      //无法获取sim卡注册状态
    NoNetworkType       = 0x200,      //无法获取网络制式
    NoInterAccess       = 0x400,      //无法获取网络连接类型
};
int main()
{
    int i = 0x0;
    //    i |= 0x1 << 4;
    if(i&0xffff)
        printf("Have Error\n");
    else
        printf("Have No Error\n");


    i |= (int)GetOperator;

    if(i&(int)NoStatus)
        printf("Have Error info_.have1 = %x\n",i);
    if(i&(int)GetOperator)
        printf("Have Error info_.have12 = %x\n",i);


    if(i&0xffff)
        printf("Have Error\n");
    else
        printf("Have No Error\n");
    i |= (int)NoStatus;
    if(i&(int)NoStatus)
        printf("Have Error info_.have13 = %x\n",i);
    if(i&(int)GetOperator)
        printf("Have Error info_.have14 = %x\n",i);


    int s = 0x0;
    s |= GetOperator;
    s |= NoStatus;
    printf("GetOperator = 0x%x\n",GetOperator);
    printf("!NoStatus = 0x%x\n",~0x1);
    printf("s = 0x%x\n",s);
    s &= ~NoStatus;
    printf("s = 0x%x\n",s);



}

#endif





#if 0



///*************************************************/


#include "QString"

#include <stdio.h>
#include "QDebug"
#include <string.h>
char* get()
{
    return NULL;
}
int main()
{
    char* s;
    s = get();

    if(s != NULL)
        printf("s s :%s   %d\n",s,strlen(s));
    else
        printf("s == NULL\n");
    return 0;
}




#endif





#if 0
///*************************************************/
//在代码中ping并捕获ping的信息
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( void )
{
    FILE   *stream;
    FILE    *wstream;
    char   buf[1024];

    memset( buf, '/0', sizeof(buf) );//初始化buf,以免后面写如乱码到文件中
    stream = popen( "ping www.baidu.com", "r" ); //将“ls －l”命令的输出 通过管道读取（“r”参数）到FILE* stream
    //    wstream = fopen( "test_popen.txt", "w+"); //新建一个可写的文件
    while(1) {
        fread( buf, sizeof(char), sizeof(buf),  stream);  //将刚刚FILE* stream的数据流读取到buf中
        //    fwrite( buf, 1, sizeof(buf), wstream );//将buf中的数据写到FILE    *wstream对应的流中，也是写到文件中
        sleep(1);
    }

    pclose( stream );
    fclose( wstream );

    return 0;
}

#endif





#if 0
///*************************************************/
//从最后面开始搜索

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( void )
{
    char* s = "^SYSINFOEX:2,3,0,1,,3,\"WCDMA\",41,\"WCDMA\"";
    printf("s = %s\n",s);
    char* p = strrchr(s,',');
    printf("strlens = %d,p = %d\n",strlen(s),strlen(p));
    int n = strlen(s);
    printf("strlens = %d,p = %d\n",n,strlen(p));
    char pp[40];
    strncpy(pp,s,strlen(s)- strlen(p));
    printf("pp = %s\n",pp);


    return 0;
}



#endif





#if 0
///*************************************************/
//strlen和sizeof的区别

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main( void )
{
    char* s = "abcdefg";
    char* b;
    b = s;
    printf("s = %d   %d   b = %s\n",strlen(s),sizeof(s),b);


    return 0;
}

#endif





#if 0

///*************************************************/
//QString比较

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
int main( void )
{
    QString s;
    s = "a123c defgc";
    int i = 0;
    i = s.indexOf(" ");
    if( i > 0) {
        printf("i = %d\n",i);
    } else {
        printf("i == %d\n",i);

    }


    return 0;
}


#endif





#if 0

/*************************************************/
//QString比较

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
int main( void )
{
    //    printf(":\n");
    char* id = "A30-12-00000" ;
    //    printf(":\n");
    char* ptr;
    //    printf(":1\n");

    if((ptr = strstr(id,"-")) == NULL) {
        return 0;
    }

    char idd[10];
    strncpy(idd,id,strlen(id)-strlen(ptr));

    printf("id = [%s],idd = [%s],ptr = [%s],\n",id,idd,ptr);
    QString s = "A30,A30+";
    if(strstr(s.toStdString().c_str(),idd) == NULL) {
        printf("NULL\n");
    } else {
        printf("not NULL\n");
    }



    return 0;
}
#endif





#if 0
/*************************************************/
//QString比较

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
int main( void )
{
    //    printf(":\n");
    QString s = "A30+-12-00000" ;

    QString ss = s.section("-",0,0);

    qDebug()<<ss<<"ss";
    printf("ss = %s111\n",ss.toStdString().c_str());

    return 0;
}

#endif





#if 0

/*************************************************/
//QDateTime例子

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
int main( void )
{
    QDateTime time = QDateTime::currentDateTime();
    printf("time = %s\n",time.toString("yyyy-MM-dd hh:mm:ss").toAscii().data());
    unsigned long long msec = time.toMSecsSinceEpoch();
    qDebug()<<"msec"<<msec;
    QDateTime time_;
    time_.setMSecsSinceEpoch(1436413000000);
    printf("time_ = %s\n",time_.toString("yyyy-MM-dd hh:mm:ss").toAscii().data());


    uint tt = time.toTime_t();
    QDateTime tt_;
    tt_.setTime_t(tt);
    printf("tt_ = %s\n",tt_.toString("yyyy-MM-dd hh:mm:ss").toAscii().data());

    return 0;
}

#endif





#if 0
/*************************************************/
//将QString  转换为QStringList   split

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
int main( void )
{
    QString s = "1,2,3,4,5,6,7,8,";
    QStringList ss = s.split(QRegExp("[,]"));
    for(int i=0;i<ss.count();i++)
    {
        printf(" i = %d  ss = %s\n",i,ss.at(i).toStdString().c_str());
    }

    return 0;
}
#endif





#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
int main( void )
{
    char str[16];
    strcpy(str,"eth1");

    int s = strcmp(str,"eth");
    printf("s = [%d]\n",s);

    return 0;
}

#endif










#if 0
//QTableWidget
void HWirelessInfoUi::InAPMode(QDomDocument doc)
{
    QStringList header;
    ui->connect_ap_list->verticalHeader()->setVisible(false);   //隐藏列表头
    ui->connect_ap_list->horizontalHeader()->setVisible(false); //隐藏行表头
    //    ui->connect_ap_list->setFrameShape(QFrame::NoFrame);  //设置边框
    ui->connect_ap_list->setHorizontalHeaderLabels(header); // 设置表头
    ui->connect_ap_list->setSelectionMode(QAbstractItemView::SingleSelection);  //设置选择的模式为单选择
    ui->connect_ap_list->setSelectionBehavior(QAbstractItemView::SelectRows);   // 设置选择行为时每次选择一行
    ui->connect_ap_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //    ui->connect_ap_list->setShowGrid(false);  // 设置不显示格子线
    //    ui->connect_ap_list->setFont(font);   设置字体
    //    ui->connect_ap_list->hideColumn(0);    //隐藏用户指定的某一列



    //    ui->connect_ap_list->setColumnCount(1);
    ui->connect_ap_list->setColumnWidth(0,ui->connect_ap_list->width());
    ui->connect_ap_list->setRowCount(8);
    //    ui->connect_ap_list->setRowHeight(0,128);
    QFont textFont = QFont();
    //    textFont.setPixelSize(20);
    QIcon icon = QIcon(":images/wifi0.png");

    QTableWidgetItem* itm = new QTableWidgetItem(QIcon(":images/wifi0.png"), "A30-00-0000");
    itm->setFont(textFont);


    //    itm->setIcon(QIcon(QPixmap::fromImage(QImage(":images/wifi0.png")).scaled(200,200,Qt::IgnoreAspectRatio)));

    ui->connect_ap_list->resizeRowsToContents();
    ui->connect_ap_list->setItem(0,0,itm);
    ui->connect_ap_list->setItem(0,1,new QTableWidgetItem(QIcon(":images/wifi1.png"), "A30-00-0001"));
    ui->connect_ap_list->setItem(0,2,new QTableWidgetItem(QIcon(":images/wifi2.png"), "A30-00-0002"));
    ui->connect_ap_list->setItem(0,3,new QTableWidgetItem(QIcon(":images/wifi3.png"), "A30-00-0003"));
    ui->connect_ap_list->setItem(0,4,new QTableWidgetItem(QIcon(":images/wifi4.png"), "A30-00-0004"));
    ui->connect_ap_list->setItem(0,5,new QTableWidgetItem(QIcon(":images/wifi3.png"), "A30-00-0005"));
    ui->connect_ap_list->setItem(0,6,new QTableWidgetItem(QIcon(":images/wifi2.png"), "A30-00-0006"));
    ui->connect_ap_list->setItem(0,7,new QTableWidgetItem(QIcon(":images/wifi1.png"), "A30-00-0007"));
    //    ui->connect_ap_list->it


    //QListWidget

    ui->ap_list->addItem(new QListWidgetItem(QIcon(":images/wifi1.png"), tr("IE\r\n1234")));
    // 或者
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setIcon(QIcon(":images/wifi2.png"));
    newItem->setText(tr("Maxthon"));

    ui->ap_list->insertItem(3, newItem);
    ui->ap_list->setIconSize(QSize(40,40));


}


#endif



#if 0

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>
typedef struct Info_Sta_WiFI_{
    QString Address;        //物理地址MAC
    QString ESSID;          //路由器名称
    QString Protocol;       //协议
    QString Mode;           //模式  (AP/STA)
    QString Frequency;      //信道
    bool    KeyOn;
    QString BitRates;       //比特率
    QString KeyMode;        //加密方式
    int     SignalLevel;    //信号强度
}Info_WiFI_Sta_;
int main()
{
    QDir dir;
    QString path=dir.currentPath();
    QString p = path + "/iwlistscan.txt";
    QFile file(p);



    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"+++++++++++++++++++++++++++++++++++++\n";
    }


    QString read_str = "";
    QStringList str_list;
    QList<struct Info_Sta_WiFI_> StaList;

    QTextStream stream(&file);

    read_str.append(stream.readAll());


    if(!read_str.isEmpty()) {
        str_list = read_str.split("          Cell ");
        for(int i=0;i<str_list.count();i++) {
            QString pri_str = str_list.at(i);
            //            printf("<<<<\n%d    --- %d  --- \n%s\n",str_list.count(),i,pri_str.toStdString().c_str());
        }
    }

    for(int i=1;i<str_list.count();i++) {

        Info_WiFI_Sta_ sta;
        QByteArray line_byte(str_list.at(i).toStdString().c_str());
        QTextStream str_stream(line_byte);
        qDebug()<<str_stream.string();
        while(!str_stream.atEnd()) {
            QString line_str = str_stream.readLine();
            if(strstr(line_str.toStdString().c_str(),"Address: ")!=NULL) {
                QStringList qs = line_str.split(": ");
                sta.Address = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"ESSID:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.ESSID = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Protocol:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Protocol = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Mode:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Mode = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Frequency:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Frequency = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Encryption key:")!=NULL) {
                QStringList qs = line_str.split(":");
                if(strstr(qs.at(1).toStdString().c_str(),"on") != NULL) {
                    sta.KeyOn = true;
                } else {
                    sta.KeyOn = false;
                }
            }
            if(strstr(line_str.toStdString().c_str(),"Bit Rates:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.BitRates = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Signal level=")!=NULL) {
                QStringList qs = line_str.split("Signal level=").at(1).split("/");
                sta.SignalLevel = qs.at(0).toInt();
            }
            if(strstr(line_str.toStdString().c_str(),"IE: ")!=NULL) {

                if(strstr(line_str.toStdString().c_str(),"Unknown:") != NULL) {
                    if(sta.KeyMode != "WPA2-PSK" && sta.KeyMode != "WPA-PSK")
                        sta.KeyMode = "Unknown";
                } else if(strstr(line_str.toStdString().c_str(),"WPA ") != NULL) {
                    if(sta.KeyMode != "WPA2-PSK")
                        sta.KeyMode = "WPA-PSK";
                } else if(strstr(line_str.toStdString().c_str(),"IEEE 802.11i") != NULL) {
                    sta.KeyMode = "WPA2-PSK";
                }
            }
            qDebug()<<line_str;
        }

        printf("coun~t \n");
            StaList.append(sta);
            printf("\n\ni=%d\nAddress = %s\n",i,StaList.at(i-1).Address.toStdString().c_str());
            printf("ESSID = %s\n",StaList.at(i-1).ESSID.toStdString().c_str());
            printf("Protocol = %s\n",StaList.at(i-1).Protocol.toStdString().c_str());
            printf("Mode = %s\n",StaList.at(i-1).Mode.toStdString().c_str());
            printf("Frequency = %s\n",StaList.at(i-1).Frequency.toStdString().c_str());
            printf("KeyMode = %s\n",StaList.at(i-1).KeyMode.toStdString().c_str());
            printf("BitRates = %s\n",StaList.at(i-1).BitRates.toStdString().c_str());
            printf("SignalLevel = %d\n",StaList.at(i-1).SignalLevel);
            printf("KeyOn = %d\n",StaList.at(i-1).KeyOn);
    }
    QDomDocument doc;
    QDomProcessingInstruction instruction;
    QByteArray buf;

    instruction = doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);
//    if(net->GetWifiInfo(wifi_info)) {
    QDomElement root = doc.createElement("WiFi_Info");
    QDomElement global = doc.createElement("Global");
        global.setAttribute("ModeType","ModeType");
        global.setAttribute("Sta_Encryption","Manually_Add");

        global.setAttribute("AP_SSID","Ap_SSID");
        global.setAttribute("AP_Password","AP_PassWd");


        global.setAttribute("Manually_Add","Sta_SSID");
        global.setAttribute("Sta_SSID","Sta_PassWd");

        root.appendChild(global);


        for(int i=0;i<StaList.count();i++) {
            QDomElement node = doc.createElement("sta"+QString::number(i));
            node.setAttribute("Address",StaList.at(i).Address);
            node.setAttribute("ESSID",StaList.at(i).ESSID);
            node.setAttribute("Protocol",StaList.at(i).Protocol);
            node.setAttribute("Mode",StaList.at(i).Mode);
            node.setAttribute("Frequency",StaList.at(i).Frequency);
            node.setAttribute("KeyOn", QString::number(StaList.at(i).KeyOn));
            node.setAttribute("BitRates",StaList.at(i).BitRates);
            node.setAttribute("KeyMode",StaList.at(i).KeyMode);
            node.setAttribute("SignalLevel",QString::number(StaList.at(i).SignalLevel));
            root.appendChild(node);
        }

        doc.appendChild(root);
        buf = doc.toByteArray(4);
        QString s(buf);
    printf("s = [%s]**********************************\n",s.toStdString().c_str());
    QDomDocument doc_;
    QString errorStr;
    int errorLine;
    int errorColumn;
    if (!doc_.setContent(buf, false, &errorStr, &errorLine, &errorColumn)) {
        printf("setcontent error... errorStr= [%s],errorLine= [%d],errorColumn= [%d],\n",errorStr.toStdString().c_str(),errorLine,errorColumn);
    }
    QDomElement roott = doc_.documentElement();
    QDomNodeList roots = roott.childNodes();
    printf("roots.name = %d",roots.count());
    printf("root = %d\n",roots.count());
    for(int i=0;i<roots.count();i++) {
        printf("i = %d  name = %s\n",i,roots.at(i).toElement().tagName().toStdString().c_str());
    }



    return 0;
}
#endif

#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

void main()
{
    QString fileName="D:/1.txt";

    QString str="CSDN";
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
//        QMessageBox::warning(this,"sdf","can't open",QMessageBox::Yes);

    }

    QTextStream in(&file);
    in<<"network={"<<"\n"<<"ssid=\"CMCC-CHH\""<<"\n"<<"psk=\"123654789\""<<"\n"<<"}";//如果写多行，同上循环即可
    //如果写多行，同上循环即可

    file.close();
    return;
}
#endif



#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

void main()
{
    char* s = "123456789";
    QByteArray buf(s,0);

    QString ss(buf);


    qDebug()<<ss;

}


#endif

#if 0

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

void main()
{

    QString s1("interface=wlan1\nctrl_interface=/var/run/hostapd\nwpa=2\
            \neap_server=1\
            \nwps_state=2\
            \nuuid=12345678-9abc-def0-1234-56789abcdef0\
            \ndevice_name=RTL8192CU\
            \nmanufacturer=Realtek\
            \nmodel_name=RTW_SOFTAP\
            \nmodel_number=WLAN_CU\
            \nserial_number=12345\
            \ndevice_type=6-0050F204-1\
            \nos_version=01020300\
            \nconfig_methods=label display push_button keypad\
            \ndriver=rtl871xdrv\
            \nbeacon_int=100\
            \nhw_mode=g\
            \nieee80211n=1\
            \nwme_enabled=1\
            \nht_capab=[SHORT-GI-20][SHORT-GI-40][HT40+]\
            \nwpa_pairwise=CCMP\
            \nmax_num_sta=8\
            \nwpa_group_rekey=86400\
            \n");



            qDebug()<<s1;
}
#endif



#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

bool main()
{
    QDir dir;
    QString path=dir.currentPath();
    QString p = path + "/config.xml";
    QFile file(p);

    if (file.open(QFile::ReadOnly) == false) {
        qDebug()<< "open "<< file.errorString();
        return false;
    }

    QDomDocument doc;
    QString      strError;
    int errLine = 0, errCol = 0;
    if (doc.setContent(&file, false, &strError, &errLine, &errCol) == false) {
        qDebug("read [%s],xml error, line[%d] code[%d].", errLine, errCol);
        return false;
    }

    if (doc.isNull()) {
        qDebug("doc is null!");
        return false;
    }
    QDomElement rootNode;
    QDomElement curNode;
    rootNode = doc.documentElement();
    curNode = rootNod.attributeNode("WifiMode").toElement();
//    curNode = rootNode.firstChildElement();


//    fnNode = doc.createElement("WifiMode");

//    fnNode.setAttribute("Mode","1");

//    printf("%s\n",doc.toString().toStdString().c_str());
//    rootNode.appendChild(fnNode);
        file.close();
    QDomNodeList s = rootNode.childNodes();
    for(int i=0;i<s.count();i++) {
        if(s.at(i).toElement().tagName() == "WifiMode") {

            curNode = s.at(i).toElement();

            printf("sxx=%s  \n",curNode.attribute("Mode").toStdString().c_str());
        }
        printf("ss=%s\n",s.at(i).toElement().tagName().toStdString().c_str());
    }

        return 0;



        QFile fp(p);
        fp.open(QFile::WriteOnly);
        fp.write(doc.toByteArray());
        fp.close();

    return true;
}


#endif


#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

bool main()
{
    QDir dir;
    QString path=dir.currentPath();
    QString p = path + "/1.xml";
    QFile file(p);

    if (file.open(QFile::ReadOnly) == false) {
        qDebug()<< "open "<< file.errorString();
        return false;
    }

    QDomDocument doc;
    QString      strError;
    int errLine = 0, errCol = 0;
    if (doc.setContent(&file, false, &strError, &errLine, &errCol) == false) {
        qDebug("read [%s],xml error, line[%d] code[%d].", errLine, errCol);
        return false;
    }

    if (doc.isNull()) {
        qDebug("doc is null!");
        return false;
    }
    QDomElement root;
    root = doc.documentElement();
    QDomNodeList s = root.childNodes();
//    root.removeChild(s.at(14));
//    QDomElement curNode = doc.createElement("testInsert");
//    curNode.setAttribute("test","123");
//    QDomNode w = root.firstChild();
//    root.insertBefore(w,root.firstChild());
//    root.appendChild(curNode);
    root.insertAfter(root.firstChild(),root.lastChild());


        printf("leve == %s\n",doc.toString().toStdString().c_str());



    return true;
}

#endif

#if 0

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
//#include
#include <QXmlStreamWriter>

typedef struct Info_Sta_WiFI_{
    QString Address;        //物理地址MAC
    QString ESSID;          //路由器名称
    QString Protocol;       //协议
    QString Mode;           //模式  (AP/STA)
    QString Frequency;      //信道
    bool    KeyOn;          //秘钥是否开启
    QString BitRates;       //比特率
    QString KeyMode;        //加密方式
    int     SignalLevel;    //信号强度
}Info_WiFI_Sta_;
bool main()
{


    Info_WiFI_Sta_ sta0;
    Info_WiFI_Sta_ sta1;
    Info_WiFI_Sta_ sta2;
    sta1.Address = "123";
    sta1.ESSID = "123";
    sta1.Protocol = "123";
    sta1.Mode = "123";
    sta1.Frequency = "123";
    sta1.KeyOn = 0;
    sta1.BitRates = "123";
    sta1.KeyMode = "123";
    sta1.SignalLevel = 0;

    sta2.Address = "1234";
    sta2.ESSID = "1234";
    sta2.Protocol = "1234";
    sta2.Mode = "1234";
    sta2.Frequency = "1234";
    sta2.KeyOn = 1;
    sta2.BitRates = "1234";
    sta2.KeyMode = "1234";
    sta2.SignalLevel = 1;

    sta0 = sta1;
    printf("Address = %s\n",sta0.Address.toStdString().c_str());
    printf("ESSID = %s\n",sta0.ESSID.toStdString().c_str());
    printf("Protocol = %s\n",sta0.Protocol.toStdString().c_str());
    printf("KeyOn = %d\n",sta0.KeyOn);
    printf("SignalLevel = %d\n",sta0.SignalLevel);

    sta0 = sta2;
    printf("\n\nAddress = %s\n",sta0.Address.toStdString().c_str());
    printf("ESSID = %s\n",sta0.ESSID.toStdString().c_str());
    printf("Protocol = %s\n",sta0.Protocol.toStdString().c_str());
    printf("KeyOn = %d\n",sta0.KeyOn);
    printf("SignalLevel = %d\n",sta0.SignalLevel);

    return true;
}
#endif


#if 0

//字乱码问题
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>
typedef struct Info_Sta_WiFI_{
    QString Address;        //物理地址MAC
    QString ESSID;          //路由器名称
    QString Protocol;       //协议
    QString Mode;           //模式  (AP/STA)
    QString Frequency;      //信道
    bool    KeyOn;
    QString BitRates;       //比特率
    QString KeyMode;        //加密方式
    int     SignalLevel;    //信号强度
}Info_WiFI_Sta_;
void main()
{
    QDir dir;
    QString path=dir.currentPath();
    QString p = path + "/iwlistscan-2.txt";
    QFile file(p);



    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"+++++++++++++++++++++++++++++++++++++\n";
    }

    QString read_str = "";
    QStringList str_list;
    QList<struct Info_Sta_WiFI_> StaList;

    QTextStream stream(&file);

    read_str = stream.readAll();

    qDebug()<<"123"<<read_str;
    if(!read_str.isEmpty()) {
        str_list = read_str.split("          Cell ");
        for(int i=0;i<str_list.count();i++) {
            QString pri_str = str_list.at(i);
            printf("<<<<\n%d    --- %d  --- \n%s\n",str_list.count(),i,pri_str.toStdString().c_str());
        }
    }
    return;
    for(int i=1;i<str_list.count();i++) {

        Info_WiFI_Sta_ sta;
        QByteArray line_byte(str_list.at(i).toStdString().c_str());
        QTextStream str_stream(line_byte);
//        qDebug()<<"123"<<str_stream.string();
        while(!str_stream.atEnd()) {
            QString line_str = str_stream.readLine();
            if(strstr(line_str.toStdString().c_str(),"Address: ")!=NULL) {
                QStringList qs = line_str.split(": ");
                sta.Address = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"ESSID:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.ESSID = qs.at(1);
                qDebug()<<"ESSID"<<sta.ESSID;
            }
            if(strstr(line_str.toStdString().c_str(),"Protocol:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Protocol = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Mode:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Mode = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Frequency:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.Frequency = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Encryption key:")!=NULL) {
                QStringList qs = line_str.split(":");
                if(strstr(qs.at(1).toStdString().c_str(),"on") != NULL) {
                    sta.KeyOn = true;
                } else {
                    sta.KeyOn = false;
                }
            }
            if(strstr(line_str.toStdString().c_str(),"Bit Rates:")!=NULL) {
                QStringList qs = line_str.split(":");
                sta.BitRates = qs.at(1);
            }
            if(strstr(line_str.toStdString().c_str(),"Signal level=")!=NULL) {
                QStringList qs = line_str.split("Signal level=").at(1).split("/");
                sta.SignalLevel = qs.at(0).toInt();
            }
            if(strstr(line_str.toStdString().c_str(),"IE: ")!=NULL) {

                if(strstr(line_str.toStdString().c_str(),"Unknown:") != NULL) {
                    if(sta.KeyMode != "WPA2-PSK" && sta.KeyMode != "WPA-PSK")
                        sta.KeyMode = "Unknown";
                } else if(strstr(line_str.toStdString().c_str(),"WPA ") != NULL) {
                    if(sta.KeyMode != "WPA2-PSK")
                        sta.KeyMode = "WPA-PSK";
                } else if(strstr(line_str.toStdString().c_str(),"IEEE 802.11i") != NULL) {
                    sta.KeyMode = "WPA2-PSK";
                }
            }
//            qDebug()<<line_str;
        }

//        printf("coun~t \n");
            StaList.append(sta);
//            printf("\n\ni=%d\nAddress = %s\n",i,StaList.at(i-1).Address.toStdString().c_str());
//            printf("ESSID = %s\n",StaList.at(i-1).ESSID.toStdString().c_str());
//            printf("Protocol = %s\n",StaList.at(i-1).Protocol.toStdString().c_str());
//            printf("Mode = %s\n",StaList.at(i-1).Mode.toStdString().c_str());
//            printf("Frequency = %s\n",StaList.at(i-1).Frequency.toStdString().c_str());
//            printf("KeyMode = %s\n",StaList.at(i-1).KeyMode.toStdString().c_str());
//            printf("BitRates = %s\n",StaList.at(i-1).BitRates.toStdString().c_str());
//            printf("SignalLevel = %d\n",StaList.at(i-1).SignalLevel);
//            printf("KeyOn = %d\n",StaList.at(i-1).KeyOn);
    }
    QDomDocument doc;
    QDomProcessingInstruction instruction;
    QByteArray buf;

    instruction = doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);
//    if(net->GetWifiInfo(wifi_info)) {
    QDomElement root = doc.createElement("WiFi_Info");
    QDomElement global = doc.createElement("Global");
        global.setAttribute("ModeType","ModeType");
        global.setAttribute("Sta_Encryption","Manually_Add");

        global.setAttribute("AP_SSID","Ap_SSID");
        global.setAttribute("AP_Password","AP_PassWd");


        global.setAttribute("Manually_Add","Sta_SSID");
        global.setAttribute("Sta_SSID","Sta_PassWd");

        root.appendChild(global);


        for(int i=0;i<StaList.count();i++) {
            QDomElement node = doc.createElement("sta"+QString::number(i));
            node.setAttribute("Address",StaList.at(i).Address);
            node.setAttribute("ESSID",StaList.at(i).ESSID);
            node.setAttribute("Protocol",StaList.at(i).Protocol);
            node.setAttribute("Mode",StaList.at(i).Mode);
            node.setAttribute("Frequency",StaList.at(i).Frequency);
            node.setAttribute("KeyOn", QString::number(StaList.at(i).KeyOn));
            node.setAttribute("BitRates",StaList.at(i).BitRates);
            node.setAttribute("KeyMode",StaList.at(i).KeyMode);
            node.setAttribute("SignalLevel",QString::number(StaList.at(i).SignalLevel));
            root.appendChild(node);
        }

        doc.appendChild(root);
        buf = doc.toByteArray(4);
        QString s(buf);
//    printf("s = [%s]**********************************\n",s.toStdString().c_str());




    return;
}
#endif

#if 0
/*************************************************/
//将QString  转换为QStringList   split   汉字乱码

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QDir>
int main( void )
{
    QDir dir;
    QString path=dir.currentPath();
    QString p = path + "/iwlistscan-2.txt";
    QFile file(p);



    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"+++++++++++++++++++++++++++++++++++++\n";
    }


    QString read_str = "";
    QStringList str_list;

    QTextStream stream(&file);

    read_str.append(stream.readAll());

    qDebug()<<"123";
           printf("%s\n",read_str.toStdString().c_str());
//    if(!read_str.isEmpty()) {
//        str_list = read_str.split("          Cell ");
//    }
//    for(int i=0;i<read_str.count();i++)
//    {
//        printf(" i = %d  ss = %s\n",i,str_list.at(i).toStdString().c_str());
//    }

    return 0;
}
#endif



#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>
void main()
{
    QString s = "subnet 192.168.2.0  netmask 255.255.255.0 {";
    QStringList ss = s.split(" ").at(1).split(".");
    for(int i=0;i<ss.count();i++) {
        printf("i = %d,ss = [%s]\n",i,ss.at(i).toStdString().c_str());
    }
//    printf("%x\n",15&~(105^105));

}
#endif
#if 0
#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>
void main()
{
    char* c = "/root/Box/zImage_Cx0";
    QString s(c);
    QString ss(s.split("123").at(0));
    printf("sss = [%s]  ss = [%s]",ss.split("/root/Box/").at(1).toStdString().c_str(),ss.toStdString().c_str());
    qDebug()<<ss<<ss.split("/Box/").at(0);
}
#endif
#if 0


///*************************************************/
//QString比较

#include <sys/types.h>
//#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>
int main( void )
{
    char* g_Cx0_uImage        = "/root/Box/sdasdasd/zImageCx0";
    QString s(g_Cx0_uImage);
    int i = 0;
    QString name = s.mid(0,s.indexOf('_')).split('/').last();
//    QString name = src.split('/').last();
//    printf("src = [%s]\n",qPrintable(src));
    printf("name = [%s]\n",qPrintable(name));

    s.prepend("mv ").append(" /boot/").append(name);

    printf("s = [%s]\n",qPrintable(s));


    return 0;
}
#endif
#if 0
///*************************************************/
//QString比较

#include <sys/types.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>

#define ROUTE_PATH "/proc/net/route"
int main()
{
    char* s = "/proc/net/route";
    if(!QFile(ROUTE_PATH).exists()) {
        printf("%s is not exists!",s);
        return 0;
    }
    QFile file(ROUTE_PATH);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        printf("%s open faild!",s);
        return 0;
    }
    QTextStream stream(&file);
    while(!stream.atEnd()) {
        QString str_line = stream.readLine();
//        string = string.replace(QRegExp("\\s{1,}"), " ");
        printf("str_line = %s",str_line.toStdString().c_str());
    }
    return 0;

}
#endif
///*************************************************/
//位运算

#if 0
#include <sys/types.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>

#define ROUTE_PATH "/proc/net/route"
int main()
{
    int s = 0;
//    s = (134<<8)|(0xB0);
//    s = ((0x87 - 1)<<8)|(0xB0);
    s = (0xC0<<8)|((0x20-1)<<8)|(0x2b);
//    qDebug()<<s;
//    printf("s = %x,s = %d\n",s,s);
    int value = 1024;
    int gl = 256;
    for (int i = 0;; ++i) {
        if (value == gl) {
                qDebug()<<i;
            printf("i = %d\n",i);
            return 0;
        }
        gl = gl * 2;
    }
    return 0;

}
#endif
///*************************************************/
//goto

#if 0
#include <sys/types.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>

#define ROUTE_PATH "/proc/net/route"
int main()
{
    int x = 0;
    printf("Excuse me while I count to 5000... \n");
all_done:
    x++;
        printf("Whew! That wasn't so bad, was it?\n");
    while (1)
    {
        printf(" %d\n", x);
        if (x ==2)
            goto all_done;
        else if(x == 3)
            goto end_done;
        else
            x=x+1;
    }
end_done:
    printf("Whew! That wasn't so bad, was it\n");

}
#endif
#if 1
#include <sys/types.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>

#define ROUTE_PATH "/proc/net/route"
QString GetNum(QString str)
{
    QString num="";
    for(int i=0;i<str.size();i++) {
        if(i%2==0) {
            num.append(str.at(i+1));
        } else {
            if(str.at(i-1) != 'F')
                num.append(str.at(i-1));
        }
    }
    return num;
}
QString GetTime(QString str)
{
    QString num="";
    for(int i=0;i<str.size();i++) {
        if(i%2==0) {
            num.append(str.at(i+1));
        } else {
            if(str.at(i-1) != 'F')
                num.append(str.at(i-1));
            if(i < 5) {
                num.append("/");
            } else if(i == 5) {
                num.append(" ");
            } else if(i>5&&i<11) {
                num.append(":");
            }
        }
    }
    return num;
}
int main()
{
    int len = 0,datalen = 0;
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QString serverNum,sendNum,recvTime,data;
    bool is_unicode = false;

    //@ 移动客服
    //08 91 683108707515F1 64 05 A1 0180F6 00 08 612061114132 23 8B 0608040A270201 5C0A656C76845BA26237FF1A60A85F53524D4F59989D00320035002E003900305143300251764E2D57FA672C8D26623700320035002E003900305143FF0C8D6090018D26623700305143FF0C67087ED365E54E3A00320030003100365E740030003267080032003265E5300270B951FB002000670064002E00310030003000380036002E
    QString str = "0891683110606605F06405800110F00008613020418394238C05000348020160A876848D2662374F59989D4E0D8DB3FF0C4ECD5F855145503C00310034002E003000305143540E65B953EF6B635E384F7F7528FF0C520667088FD48FD88D606B3E4F59989D67E58BE253EF53D19001004300580057004481F30031003000300031003030025FEB901F5145503C3001514D6D4191CF67E58BDD8D3930018BE653558BF74E0B";
    //@ 18037781813
    //08 91 683108303745F1 24 0D91 688130771818F3 00 08 611003413393 23 1A 00690061006D006200690064006A0063FF0C4E2D56FD79FB52A8
//    QString str = "0891683108303745F1240D91688130771818F30008611003413393231A00690061006D006200690064006A0063FF0C4E2D56FD79FB52A8";
    //@ 服务号码长度
    qDebug()<<"Server Numb len:"<<str.mid(len,2).toInt(0,16);
    len += 2;
    //@ 服务号码格式  91 表示后面添加 '+'
    qDebug()<<"Server Numb Format:"<<str.mid(len,2);
    len += 2;
    //@ 获取服务号码
    serverNum = GetNum(str.mid(len,str.mid(0,2).toInt()*2-2));
    len += str.mid(0,2).toInt()*2 -2;
    //@ 基本参数(TP-MTI/MMS/RP)
    qDebug()<<"TP-MTI/MMS/RP:"<<str.mid(len,2);
    len += 2;
    //@ 获取发送号码长度
    int nl = str.mid(len,2).toInt(0,16);
    qDebug()<<"Send Numb len:"<<nl;
    len += 2;
    //@ 发送号码格式  91 表示后面添加 '+'  A1   中国移动\*
    if(str.mid(len,2) == "91") {
        sendNum.append("+");
    }
    qDebug()<<"Send Numb Format:"<<str.mid(len,2);
    len += 2;
    //@ 获取发送号码
    if(nl%2 != 0) {
        nl += 1;
        sendNum.append(GetNum(str.mid(len,nl)));
    }
    qDebug()<<"Send Numb:"<<sendNum;
    len = len + nl;
    //@ 上层协议标识TP-PID，一般设置为00，表示普通GSM，点对点
    qDebug()<<"TP-PID:"<<str.mid(len,2);
    len += 2;
    //@ 获取编码方式 TP-DCS
    if(str.mid(len,2) == "08") {
        is_unicode = true;
        qDebug()<<"TP-DCS: Unicode";
    } else if(str.mid(len,2) == "00") {
        qDebug()<<"TP-DCS: 7-bit编码(英文)";
    } else if(str.mid(len,2) == "04") {
        qDebug()<<"TP-DCS: 8-bit编码(图片和铃声)";
    }
    len += 2;
    //@ 获取时间
    recvTime = GetTime(str.mid(len,12));
    qDebug()<<"Recv Time:"<<recvTime;
    len += 12;
    //@ 获取时区
    qDebug()<<"Timezone:"<<GetNum(str.mid(len,2));
    len += 2;
    //@ 获得数据长度
    datalen = str.mid(len,2).toInt(0,16);
    qDebug()<<"Data len:"<<datalen<<"Byte";
    len += 2;
    //@ 检测时否为长短信，如果为长短信，则包括信息头
    if(str.mid(len,2).toInt(0,16) == 6) {
        //@ 信息头长度
        int n = str.mid(len,2).toInt(0,16);
        qDebug()<<"Msg head len:"<<n<<"Byte";
        len += 2;
        //@ 信息单元标识
        qDebug()<<"Msg Unit Mark:"<<str.mid(len,2);
        len += 2;
        //@ 信息单元长度
        qDebug()<<"Msg len:"<<str.mid(len,2).toInt(0,16);
        len += 2;
        //@ 用于短信接收方区分不同短信的标识
        qDebug()<<"Msg Mark:"<<str.mid(len,4);
        len += 4;
        //@ 信息总条数
        qDebug()<<"Msg Total:"<<str.mid(len,2).toInt(0,16);
        len += 2;
        //@ 当前信息第几条
        qDebug()<<"Current Msg Numb:"<<str.mid(len,2).toInt(0,16);
        len += 2;
        datalen = datalen - n;
    }
    //@ 获取数据
    data = str.mid(len,datalen*2);
    qDebug() << "Data:\n"<<str.mid(len,datalen*2);
    //@ 还原数据
    if(is_unicode)  {
        QStringList s;
        for(int i = 0;i < data.length();i += 4) {
            s.append(data.mid(i,4));
        }
        QString t1;
        foreach (const QString &data, s) {
            t1.append(data.toUShort(0,16));
        }

        qDebug() << "t1:" << t1;
        QString re = codec->fromUnicode(t1);
        qDebug() << "re:" << re;
        qDebug() << "Data:" << QObject::trUtf8(re.toLatin1().data());
    }
}
#endif

#if 0
#include <sys/types.h>
#ifndef WIN32
#include <unistd.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "QString"
#include "QDebug"
#include <QDateTime>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QDomDocument>
#include <QTextCodec>
//#include
#include <QXmlStreamWriter>

#define ROUTE_PATH "/proc/net/route"
int main()
{
    QString pattern("go{2,6}gle");
        QRegExp rx(pattern);

        QString str("Ads by goooooogle");
        int pos = str.indexOf(rx);              // 0, position of the first match.
                                                // Returns -1 if str is not found.
                                                // You can also use rx.indexIn(str);
        qDebug() << pos;
        if ( pos >= 0 )
        {
            qDebug() <<__LINE__<< rx.matchedLength();     // 5, length of the last matched string
                                                // or -1 if there was no match
            qDebug() <<__LINE__<<  rx.capturedTexts();     // QStringList("a=100", "a", "100"),
                                                //   0: text matching pattern
                                                //   1: text captured by the 1st ()
                                                //   2: text captured by the 2nd ()

            qDebug() <<__LINE__<<  rx.cap(0);              // a=100, text matching pattern
            qDebug() <<__LINE__<<  rx.cap(1);              // a, text captured by the nth ()
            qDebug() <<__LINE__<<  rx.cap(2);              // 100,

            qDebug() <<__LINE__<<  rx.pos(0);              // 0, position of the nth captured text
            qDebug() <<__LINE__<<  rx.pos(1);              // 0
            qDebug() <<__LINE__<<  rx.pos(2);              // 2
        }
}
#endif
