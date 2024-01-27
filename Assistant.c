#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>

#define ESC 27
char user_input[100];
int main()
{
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
    int currentHour = localTime->tm_hour;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2) ;
    printf("\n\t\t\t\t\tHello Kratak! ");
    if(currentHour >= 5 && currentHour < 12)
        printf("Good Morning");
    else if(currentHour >= 12 && currentHour <= 16)
        printf("Good Afternoon");
    else if(currentHour > 16 && currentHour <= 22)
        printf("Good Evening");
    else
        printf("Good Night");
    printf("\n\t\t\tI am Your Personal Assistant. Good to see you here.\n\n");
    while(1)
    {
        user_input[0]  = 0;
        SetConsoleTextAttribute(hConsole, 14) ;
        printf("\nUser: ");
        SetConsoleTextAttribute(hConsole, 7) ;
        gets(user_input);
        SetConsoleTextAttribute(hConsole, 2) ;
        printf("Bot :");
        SetConsoleTextAttribute(hConsole, 7) ;
        if(strcmp(user_input, "exit")==0 || strcmp(user_input, "bye")==0)
        {
            printf(" Bye ^_^\n      See You Soon ");
            break;
        }
        else if(strcmp(user_input,"  ")==0 || strcmp(user_input,"")==0 || strcmp(user_input," ")==0)
        {
            printf(" Please enter something\n");
        }
        else if(strcmp(user_input,"hi")==0 || strcmp(user_input,"hii")==0 || strcmp(user_input,"hey")==0 || strcmp(user_input,"hello")==0 ||  strcmp(user_input,"hy")==0)
        {

            printf(" Hello I am your Personal Assistant\n      What brought you here today? :)\n");
        }
        else if(strcmp(user_input,"c")==0 || strcmp(user_input,"C")==0)
        {
            printf(" Opening C Directory\n");
            system("start C: directory");
        }
        else if(strcmp(user_input,"doc")==0 || strcmp(user_input,"document")==0)
        {
            printf(" Opening Documents\n");
            system("start C:\\Users\\LENOVO\\Documents");
        }
        else if(strcmp(user_input,"download")==0 || strcmp(user_input,"dwnld")==0 || strcmp(user_input, "down") == 0)
        {
            printf(" Opening Download\n");
            system("start C:\\Users\\LENOVO\\Downloads");
        }
        else if(strcmp(user_input,"file")==0)
        {
            printf(" Opening Program File\n");
            system("start E:\\Coding\\Projects\\Assistant\\Assistant.c");
        }
        else if(strcmp(user_input,"codeblocks")==0 || strcmp(user_input, "code") == 0)
        {
            printf(" Opening CodeBlocks\n");
            system("start E:\\Coding\\C++\\Hello.cpp");
        }
        else if(strcmp(user_input,"d")==0 || strcmp(user_input,"D")==0)
        {
            printf(" Opening D Directory\n");
            system("start D: directory");
        }
        else if(strcmp(user_input,"e")==0 || strcmp(user_input,"E")==0)
        {
            printf(" Opening E Directory\n");
            system("start E: directory");
        }
        else if(strcmp(user_input,"bin")==0)
        {
            printf(" Opening Recycle Bin\n");
            system("start shell:RecycleBinFolder");
        }
        else if(strcmp(user_input,"sleep")==0)
        {
            printf(" Sleeping, Press any key to wake.\n");
            Sleep(500);
            system("start RUNDLL32.EXE powrprof.dll,SetSuspendState 0,1,0");
        }
        else if(strcmp(user_input,"ctrl")==0 || strcmp(user_input,"control panel")==0)
        {
            printf(" Opening Control Panel\n");
            system("start control panel");
        }
        else if(strcmp(user_input,"math")==0 || strcmp(user_input,"calculator")==0 || strcmp(user_input,"calc")==0)
        {
            printf(" Opening Calculator\n");
            system("start calc");
        }
        else if(strcmp(user_input,"notepad")==0)
        {
            printf(" Opening Notepad Editor \n");
            system("start notepad");
        }
        else if(strcmp(user_input,"whtsap")==0)
        {
            printf(" Opening WhatsApp \n");
            system("start whatsapp:");
        }
        else if(strcmp(user_input,"cam")==0 || strcmp(user_input,"camera")==0)
        {
            printf(" Opening Camera\n");
            system("start microsoft.windows.camera:");
        }
        else if(strcmp(user_input,"linkedin")==0)
        {
            printf(" Opening LinkedIn\n");
            system("start https://www.linkedin.com/feed/");
        }
        else if(strcmp(user_input,"play music")==0 || strcmp(user_input,"music")==0)
        {
            printf(" Opening Music\n");
            system("start https://gaana.com/");
        }
        else if(strcmp(user_input,"ms paint")==0 || strcmp(user_input,"paint")==0)
        {
            printf(" Opening MS Paint\n");
            system("start mspaint");
        }
        else if(strcmp(user_input,"ms word")==0 || strcmp(user_input,"word")==0)
        {
            printf(" Opening MS Word\n");
            system("start winword");
        }
        else if(strcmp(user_input,"ms powerpoint")==0 || strcmp(user_input,"powerpoint")==0 || strcmp(user_input,"powerpnt")==0 )
        {
            printf(" Opening MS Powerpoint\n");
            system("start powerpnt");
        }
        else if(strcmp(user_input,"ms excel")==0 || strcmp(user_input,"excel")==0)
        {
            printf(" Opening MS Excel\n");
            system("start excel");
        }
        else if(strcmp(user_input,"ms store")==0 || strcmp(user_input,"store")==0)
        {
            printf(" Opening MS Store\n");
            system("start ms-windows-store:");
        }
        else if(strcmp(user_input,"google")==0)
        {
            printf(" Opening Google \n");
            system("start http://google.com");
        }
        else if(strcmp(user_input,"youtube")==0 || strcmp(user_input,"utube")==0 || strcmp(user_input,"yt")==0 || strcmp(user_input,"ytb")==0)
        {
            printf(" Opening Youtube \n");
            system("start http://youtube.com");
        }
        else if(strcmp(user_input,"mail")==0 || strcmp(user_input,"gmail")==0)
        {
            printf(" Opening Gmail\n");
            system("start https://mail.google.com/mail");
        }
        else if(strcmp(user_input,"climate")==0 || strcmp(user_input,"weather")==0)
        {
            printf(" Launching Weather Guide: \n");
            system("start https://weather.com/en-IN/weather/today/l/28.46,77.50?par=google");
        }
        else if(strcmp(user_input,"news")==0)
        {
            printf(" Today's News:\n");
            system("start https://news.google.com/home");
        }
        else if(strcmp(user_input,"leetcode")==0)
        {
            printf(" Opening Leetcode's Problem Set\n");
            system("start https://leetcode.com/problemset/all/");
        }
        else if(strcmp(user_input,"gfg")==0)
        {
            printf(" Opening Geeks for Geeks's Problem Set\n");
            system("start https://practice.geeksforgeeks.org/");
        }
        else if(strcmp(user_input,"codechef")==0)
        {
            printf(" Opening Codechef's Problem Set\n");
            system("start https://www.codechef.com/practice/");
        }
        else if(strcmp(user_input,"wifi")==0)
        {
            printf(" WiFi Details : \n");
            SetConsoleTextAttribute(hConsole, 2);
            system("C:\\Windows\\System32\\ipconfig");
        }
        else if(strcmp(user_input,"restart")==0)
        {
            printf(" Restarting PC in 5 seconds\n");
            system("C:\\Windows\\System32\\shutdown /r /t 5");
        }
        else if(strcmp(user_input,"time")==0 || strcmp(user_input, "date")==0)
        {
            time_t t;
            time(&t);
            printf(" It's %s", ctime(&t));
        }
        else if(strcmp(user_input,"shutdown")==0 || strcmp(user_input,"switch off")==0 || strcmp(user_input,"power off")==0 || strcmp(user_input,"off")==0 || strcmp(user_input,"turn off")==0  || strcmp(user_input,"shut down")==0 || strcmp(user_input,"shut")==0 )
        {
            char s[50];
            char t;
            printf(" Press ESCAPE KEY to Cancel.\n      Time less than 10 Seconds : ");
            t = _getch();
            if(t != ESC)
            {
                sprintf(s, "C:\\Windows\\System32\\shutdown /s /t %d", t-'0');
                system(s);
                break;
            }
            else
            {
                printf("\n      Process Aborted.\n");
            }
        }
        else if(strcmp(user_input,"wait")==0 || strcmp(user_input,"abort")==0)
        {
            printf(" Shut Down Aborted...\n");
            system("C:\\Windows\\System32\\shutdown /a");
        }
        else if(strcmp(user_input,"functions")==0)
        {
            printf("\nCommand                               - Function");
            printf("\nc | C                                 - Open C Directory");
            printf("\nd | D                                 - Open D Directory");
            printf("\ne | E                                 - Open E Directory");
            printf("\nhi | hii | hey | hello|hy             - Wishes Hello");
            printf("\ndoc | document                        - Open Document Folder");
            printf("\ndown | download                       - Open Download Folder");
            printf("\nfile                                  - Open the file containing the code for the program (location needs to be set in line 68");
            printf("\nbin                                   - Open Recycle Bin");
            printf("\nctrl | control panel                  - Open Control Panel");
            printf("\nmath | calculator | calc              - Open Calculator");
            printf("\ncamera | cam                          - Open Camera");
            printf("\nnotepad                               - Open Notepad");
            printf("\nwhtsap                                - Open WhatsApp");
            printf("\nlinkedin                              - Open Linkedin");
            printf("\nplay music | music                    - Open ganna.com to play song");
            printf("\nms paint | paint                      - Open MS Paint");
            printf("\nms word | word                        - Open MS Word");
            printf("\nms excel | excel                      - Open MS Excel");
            printf("\nms powerpoint | powerpoint | powerpnt - Open MS PowerPoint");
            printf("\nms store | store                      - Open MS Store");
            printf("\ngoogle                                - Open Google's Homepage");
            printf("\nyoutube | utube | yt | ytb            - Open Youtube's Homepage");
            printf("\nmail | gmail                          - Open Gmail");
            printf("\nclimate | weather                     - Open Weather Guide");
            printf("\nnews                                  - Open Today's News");
            printf("\nleetcode                              - Open Leetcode's Problemset");
            printf("\ngfg                                   - Open GeeksForGeeks's Problemset");
            printf("\ncodechef                              - Open CodeChef's Problemset");
            printf("\nwifi                                  - Open connected Wifi Details");
            printf("\nerp                                   - Open LIET's Student ERP");
            printf("\nportal | prtl                         - Open LIET's Captive Portal for Common WIFI");
            printf("\ntime | date                           - Current System Time & Date");
            printf("\nrestart                               - Restart PC in 5 Seconds");
            printf("\noff | power off | switch off | shutdown - ShutDown PC");
            printf("\nwait | abort                          - Abort System Shut Down");
            printf("\nbye | exit                            - Turn off the current session on Terminal");
        }
        else
        {
            char site[100];
            printf(" This is what I found on Web.\n");
            sprintf(site, "https://www.google.com/search?q=%s", user_input);
            ShellExecuteA(NULL, "open", site, NULL, NULL, SW_SHOW);
        }
    }
    return 0;
}
