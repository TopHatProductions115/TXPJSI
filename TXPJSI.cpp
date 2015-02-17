#include <iostream>

#include <cstdafx>

#include <cstdio>

#include <cstdlib>

#include <string>

#include <cstring>

#include <cstdarg>

#include <ctime>

#include <sstream>

#include <fstream>

#include <algorithm>

#include <dirent.h>

#include <vector>

#include <sys/stat.h>

#include <sys/socket.h>

#include <sys/types.h>

#include <unistd.h>

#include <errno.h>

#include <thread>    

#include <chrono>   

#include "cgicc/CgiDefs.h"
#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"

using namespace std;
using namespace cgicc;
Cgicc cgi;


bool Object_exists(const char* fileName, object)
{
    fileName = object;
    std::ifstream infile(fileName);
    return infile.good();
}


char delete_Object( object )
{
object = Object;
detect_File_existence();

int remove ( Object );

  if( remove( Object ) != 0 )
    perror( "Error deleting file" );
    Object = NULL;
    object = NULL;
  else
    puts( "File successfully deleted" );
}

char copy_Object( object )
{
object = Object;
detect_File_existence();

file_Name = Object;

  ifstream input(Object);
  stringstream file_Content;

  while(input >> file_Content);

  cout << file_Content.str() << endl;
}


char paste_Object( object )
{
result = object+file_Name;

detect_File_existence(result);

ofstream paste_file(result);
paste_file << file_Content;
fclose (result);
}


char move_Object( object )
{
std::stringstream split(object);
std::string segment;
std::vector<std::string> seglist;

while(std::getline(split, segment, '|'))
{
   seglist.push_back(segment);

initial_Src == seglist.front();
terminal_Src == seglist.back();
}

string srcName  = initial_Src;
string destName = terminal_Src;
    
      int  ret       = rename(srcName.c_str(), destName.c_str());
    
      if   (ret == -1) { cout << "Unable to rename file: "        << srcName ; }
      else             { cout << "Successfully renamed file to: " << destName; }
    
      return 1;
}


char new_Object( object )
{

std::stringstream split(object);
std::string segment;
std::vector<std::string> seglist;

while(std::getline(split, segment, '|'))
{
   seglist.push_back(segment);

initial_Src == seglist.front();
blank == seglist.back();
}

result = initial_Src+blank;

ofstream newFile (result);

object = result;
detect_File_existence();

int remove ( object );

  if( remove( object ) != 0 )
    perror( "Error completing directory clear" );
  else
    puts( "Directory successfully created" );
}


char rename_Object( object )
{
std::stringstream split(object);
std::string segment;
std::vector<std::string> seglist;

while(std::getline(split, segment, '|'))
{
   seglist.push_back(segment);

initial_Src == seglist.front();
terminal_Src == seglist.back();
}

char oldname[] = initial_Src;
char newname[] = terminal_Src;

check= rename ( const char * oldname, const char * newname );

if ( check == 0 )
    puts ( "File successfully renamed" );
  else
    perror( "Error renaming file" );
}


int get_Object_info(int argc, char *argv[])
{
    struct stat sb;

   if (argc != 2) {
        fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

   if (stat(argv[1], &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

   printf("File type:                ");

   switch (sb.st_mode & S_IFMT) {
    case S_IFBLK:  printf("block device\n");            break;
    case S_IFCHR:  printf("character device\n");        break;
    case S_IFDIR:  printf("directory\n");               break;
    case S_IFIFO:  printf("FIFO/pipe\n");               break;
    case S_IFLNK:  printf("symlink\n");                 break;
    case S_IFREG:  printf("regular file\n");            break;
    case S_IFSOCK: printf("socket\n");                  break;
    default:       printf("unknown?\n");                break;
    }

   printf("I-node number:            %ld\n", (long) sb.st_ino);

   printf("Mode:                     %lo (octal)\n",
            (unsigned long) sb.st_mode);

   printf("Link count:               %ld\n", (long) sb.st_nlink);
    printf("Ownership:                UID=%ld   GID=%ld\n",
            (long) sb.st_uid, (long) sb.st_gid);

   printf("Preferred I/O block size: %ld bytes\n",
            (long) sb.st_blksize);
    printf("File size:                %lld bytes\n",
            (long long) sb.st_size);
    printf("Blocks allocated:         %lld\n",
            (long long) sb.st_blocks);

   printf("Last status change:       %s", ctime(&sb.st_ctime));
    printf("Last file access:         %s", ctime(&sb.st_atime));
    printf("Last file modification:   %s", ctime(&sb.st_mtime));

   exit(EXIT_SUCCESS);
}


read_sys_usage()
{

cout<<"Gathering: system and user CPU times used, integral shared memory size, integral unshared data size and stack size values, block input /output operations, and IPC messages sent and received...";

int getrusage(int who, struct rusage *usage);

struct rusage
{
struct timeval ru_stime; /* system CPU time used */
struct timeval ru_utime; /* user CPU time used */
long   ru_ixrss;         /* integral shared memory size */
long   ru_idrss;         /* integral unshared data size */
long   ru_isrss;         /* integral unshared stack size */
long   ru_inblock;       /* block input operations */
long   ru_oublock;       /* block output operations */
long   ru_msgsnd;        /* IPC messages sent */
long   ru_msgrcv;        /* IPC messages received */
long   ru_nsignals;      /* signals received */
}

cout<<"Gathering: /proc/self/ CPU Usage values...

static string memory_usage()
{
ostringstream mem;
PP("hi");
ifstream proc("/proc/self/status");
string s;
while(getline(proc, s), !proc.fail())
{
if(s.substr(0, 6) == "VmSize")
{
mem << s;
return mem.str();
}
}
return mem.str();
}

}


char file_Search( object )
{
std::stringstream split(object);
std::string segment;
std::vector<std::string> seglist;

while(std::getline(split, segment, '|'))
{
   seglist.push_back(segment);

searchbar == seglist.front();
filetype == seglist.back();
}

system($ find /home searchbar filetype)

if(filetype=="within 7")
{
system(find /home searchbar -atime +7);
system(find /home searchbar -atime 7);
system(find /home searchbar -atime -7);
system(stat --format=%n | %s | %d | %p | %A | %M |  *);
}

if(filetype=="more than 7")
{
system(find /home searchbar -mtime -7);
system(stat --format=%n | %s | %d | %p | %A | %M |  *);
}

}

//Main feature - dirList!
//Created by TopHatProductions115, with assistance from cpp.sh and Ramith on Bytes.com

int dirList ( const char* path )
{

cout << "Please wait...";

DIR *pdir = NULL;
pdir = opendir (path);
struct dirent *pent = NULL;

if (pdir == NULL)
{

cout << "\n ERROR: variable ::pdir not initialized correctly.";
return 1;

}

while ((pent = readdir (pdir)))
{

if (pent == NULL)
{

cout << "\n ERROR: variable ::pent not initialized correctly.";
return 1;

}

cout << pent->d_name << endl;

}

closedir (pdir);

cin.get ();
return 0;

exit(EXIT_SUCCESS);

}

bool directoryExistense( const char* path )
{    
    if ( path == NULL) return false;
 
    DIR *pdir = NULL;
    bool direxist = false;
    
    cout << "\n Sorry, but the given path is invalid (404)";
 
    pdir = opendir (path);
 
    if (pdir != NULL)
    {
        direxist = true;    
    
        cout << "\n Opening...";
    
        //This would be the regular program conclusion - (void) closedir (pdir);

	dirList( path );
    }
 
    return direxist;
}

int dir_List( object )
{
    string object;  
    const char* path = object.c_str();
    
    directoryExistense( path );

}

//End main feature

//Open Programs

void prgopen( object )
{
system( object );
}

//Threading attempt

void new_Threadpool(object)
{
int MAX_TASKS = object;
thr_pool();
}


void waiting(void* arg)
{
  int* x = (int*) arg;
  cout << "Hello. Your thrpool awaits your command" << *x << endl;
//  cout << "\n";
}


void new_added(void* arg)
{
  int* x = (int*) arg;
  cout << "Hello. Your thread awaits your use" << *x << endl;
//  cout << "\n";
}


int thr_pool(int argc, char* argv[])
{
ThreadPool tp(2);
int ret = tp.initialize_threadpool();
if (ret == -1)
{
cerr << "Failed to initialize JSI Thread Pool. Shutting down." << endl;
return 0;
}

for (int i = 0; i < MAX_TASKS; i++)
{
int* x = new int();
*x = i+1;
Task* t = new Task(&waiting, (void*) x);
//    cout << "Adding to pool, task " << i+1 << endl;
   tp.add_task(t);
//    cout << "Added to pool, task " << i+1 << endl;
}

}


void increase_ThreadpoolSize(object)
{
int additional = object;
int total = additional+MAX_TASKS;

for (int i = MAX_TASKS; i < total; i++)
{
int* x = new int();
*x = i+1;
Task* t = new Task(&new_added, (void*) x);
cout << "Adding to pool, task " << i+1 << endl;
   tp.add_task(t);
cout << "Added to pool, task " << i+1 << endl;
}
}


void decrease_ThreadpoolSize(object)
{
int removable = object;
int total = MAX_TASKS-removable;

for (int i = MAX_TASKS; i > total; i--)
{
int* x = new int();
*x = i-1;
Task* t = remove Task(&new_added, (void*) x);
cout << "Decreasing task number for pool, task " << i-1 << endl;
cout << "Removed from pool, task " << i-1 << endl;
}
}


void release_ThreadpoolResources(object)
{
cout << "Releasing thrpool resources"<< endl;
tp.~ThreadPool();
cout << "Killing thrpool." << object << endl;
}


void exec_nativeFunction(object)
{
void (*call) (int);
cout << "Grabbing function: " << object << endl;
call = &object;
}


void add_FunctionToPool(object)
{
Task* t = new Task(&exec_nativeFunction, (void*) x);
cout << "Adding to pool, task " << i+1 << endl;
   tp.add_task(t);
cout << "Added to pool, task " << i+1 << endl;

exec_nativeFunction(object);
}


pause_mainThread(object)
{
sleep_for( object );
}


kill_Threadpool(object)
{
cout << "Killing thrpool." << object << endl;
cout << "\n";
tp.destroy_threadpool();
}


exec_tempBinary(object)
{
std::stringstream split(object);
std::string segment;
std::vector<std::string> seglist;

while(std::getline(split, segment, '|'))
{
   seglist.push_back(segment);

fpath == seglist.front();
fcontent == seglist.back();
}

using std::fstream;
fstream dcf;
dcf.open(fpath,std::ios::out);
dcf << fcontent;
dcf.close();

system("c++ $fpath >>.cpp -o $fpath >>.so -shared -fPIC ");
ext = ".so";
compile += fpath+ext;
dlopen(compile, RTLD_LAZY);
}


void switcher ( object, operation )
{
switch (operation)
{
case detectObject:
Object_exists( object );
break;

case removeObject:
copy_Object( object );
break;

case copyObject:
copy_Object( object );
break;

case pasteObject:
paste_Object( object );
break;

case moveObject:
move_Object( object );
break;

case createObject:
new_Object( object );
break;

case renameObject:
rename_Object( object );
break;

case getInfo:
get_Object_info();
break;

case sysUsage:
read_sys_usage();
break;

case Objectsearch:
file_Search( object );
break;

case dirList:
dir_List( object );
break;

case prgOpen:
prgopen( object );
break;

case newThreadPool:
new_Threadpool( object );
break;

case killThreadPool:
kill_Threadpool( object );
break;

case pauseThreadmain:
pause_mainThread( object );
break;

case inflateThreadpool:
increase_ThreadpoolSize( object );
break;

case releaseThreadpool_kill:
release_ThreadpoolResources( object );
break;

case callNativebinarytoPool:
add_FunctionToPool( object );
break;

case DynamicFileCompiler:
exec_tempBinary( object );
break;

default:
cout << "ERR: INVALID_REQUEST.";
return -1;
break;
}
}


int main(int argc, char **argv)
{

try {
       Cgicc TXPJSI;

cgicc::form_iterator name = cgi.getElement("object");
cgicc::form_iterator name = cgi.getElement("operation");

if(object != cgi.getElements().end()) {
   std::string name = cgi("object");
}

if(operation != cgi.getElements().end()) {
   std::string name = cgi("operation");
}

switcher( object, operation );

}

catch(exception& e) {
       // handle any errors here.
       cout << "ERROR!!" << endl;
    }
    return 0; 

}
