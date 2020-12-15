#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class stud
{
	private:
		string name,fname,mname,state,sex,caste,background,course,condition,level,game;
	int amount,marks,age,i,a[5];
	float per;
	public:
	void logo();
	void file();
	void read_data();
	void jeemain();
	void class12th_marks();
	void locality();
	void games();
	void fbackground();
	void feedecription();
	void netscholarship();
	
};
//Taking details from user
void stud::read_data()
{
	cout<<"~Enter Student Name:";
	getline(cin,name);
	cout<<"~Enter Father Name: Mr."<<ends;
	getline(cin,fname);
	cout<<"~Enter Mother Name: Mrs."<<ends;
	getline(cin,mname);
	cout<<"~Enter your Sex:"<<ends;
	getline(cin,sex);
	cout<<"~Enter your State:"<<ends;
	getline(cin,state);
	cout<<"~Enter your caste:"<<ends;
	cin>>caste;
	cout<<"~Enter your age:"<<ends;
	cin>>age;
	cout<<"~Enter your Jee main marks:"<<ends;
	cin>>marks;
	cout<<"~Enter 12th class percentage:"<<ends;
	cin>>per;
	cout<<"~If u played game at state/national level Then type yes otherwise no:";
	cin>>condition;
	if(condition=="yes"||condition=="YES"||condition=="Yes")
	{
	cout<<"~Enter the game which you played at state/national level:";
	cin>>game;
	cout<<"~Enter the level you played(State/National):";
	cin>>level;
    }
}
//scholarship by jee main
void stud::jeemain()
{
	if(marks<50)
	{
		cout<<"2) -->Acc. to your jee main marks you not avail any scholarship"<<endl;
		a[1]=0;
	}
    else if(marks>=50&&marks<75)
    {
	    cout<<"2) -->Acc. to your jee main marks you got 10000 scholarship"<<endl;
	    a[1]=10000;
	}
	else if(marks>=75&&marks<100)
	{
	    cout<<"2) -->Acc. to your jee main marks you got 30000 scholarship"<<endl;
	    a[1]=30000;
	}
	else if(marks>=100&&marks<125)
	{
	    cout<<"2) -->Acc. to your jee main marks you got 35000 scholarship"<<endl;
	    a[1]=35000;
	}
	else if(marks>=125&&marks<150)
	{
	    cout<<"2) -->Acc. to your jee main marks you got 40000 scholarship"<<endl;
	    a[1]=40000;
	}
	else if(marks>=150&&marks<200)
	{
	    cout<<"2) -->Acc. to your jee main marks you got 50000 scholarship"<<endl;
	    a[1]=50000;
	}
	else if(marks>=200)
	{
	    cout<<"2) -->Acc. to your jee main marks you got 75000 scholarship"<<endl;
	    a[1]=75000;
	}
};
//scholarship by 12th class marks
void stud::class12th_marks() 
{
	
	if(per>=98)
	{
		cout<<"3) -->Acc. to your 12th class marks you got RS.75000 scholarship"<<endl;
		a[2]=75000;
	}
    else if(per<98&&per>=90)
    {
	    cout<<"3) -->Acc. to your 12th class marks you got RS.50000 scholarship"<<endl;
	    a[2]=50000;
	}
	else if(per<90&&per>=80)
	{
	    cout<<"3) -->Acc. to your 12th class marks you got RS.40000 scholarship"<<endl;
	    a[2]=40000;
	}
	else if(per<80&&per>=70)
	{
	    cout<<"3) -->Acc. to your 12th class marks you got RS.30000 scholarship"<<endl;
	    a[2]=30000;
	}
	else if(per<70&&per>=60)
	{
	    cout<<"3) -->Acc. to your 12th class marks you got RS.20000 scholarship"<<endl;
	    a[2]=20000;
	}
	else if(per<60)
	{
	    cout<<"3) -->Acc. to 12th class marks you not avail any scholarship"<<endl;
	    a[2]=0;
	}
};
//scholarship by status
void stud::locality() 
{
	if((state=="Punjab"||state=="punjab"||state=="PUNJAB")&&(caste=="SC"||caste=="ST"||caste=="sc"||caste=="st"||caste=="Sc"||caste=="St")&&(course=="btech"||course=="BTECH"||course=="Btech"||course=="btech."||course=="BTECH."||course=="Btech."))
	{
	cout<<"-->You avail RS. 89500 i.e. 100% scholarship on the basis of your status"<<endl;
	a[3]=89500;
    }
	else if((state=="Punjab"||state=="punjab"||state=="PUNJAB")&&(caste=="SC"||caste=="ST"||caste=="sc"||caste=="st"||caste=="Sc"||caste=="St")&&(course=="btech.hon."||course=="BTECH.HON."||course=="Btech.Hon."))
	{
	cout<<"4) -->You avail RS. 99500 i.e. 100% scholarship on the basis of your status"<<endl;
	a[3]=99500;
    }
	else
	{
	cout<<"4) -->You not avail any scholarship on the basis of your status"<<endl;
    a[3]=0;
    }
};
//taking details of family army background
void stud::fbackground() 
{
	cout<<"~If your Family member is/was in Army. Type YES,Otherwise Type NO:";
	cin>>background;
	if(background=="yes"||background=="YES"||background=="Yes")
	{
	cout<<endl<<endl<<"1) -->You Avail Rs.45000 scholarship on the basis of Army Background"<<endl;
	a[0]=45000;
    }
	else 
	{
	cout<<endl<<endl<<"1) -->You not avail any scholarship on the basis of Army Background"<<endl;
	a[0]=0;
    }
};
//description of fee for btech and btech hon. course
void stud::feedecription() 
{
	cout<<"~Enter the Stream in which you want to take admission(btech./ btech. hon.):";
	cin>>course;
	if(course=="btech"||course=="BTECH"||course=="Btech"||course=="btech."||course=="BTECH."||course=="Btech.")
	cout<<"-:Fees is Rs.89500 per semester for the Btech. course"<<endl;
	else if(course=="btech.hon."||course=="BTECH.HON."||course=="Btech.Hon.")
	cout<<"-:Fees is Rs.99500 per semester for the Btech. Hon. course"<<endl;
};
//scholarship by game quota
void stud::games()
{   
	if(condition=="no"||condition=="NO"||condition=="No")
    {
    cout<<"5) -->You not avail any scholarship on the basis of sport quota"<<endl;
    a[4]=0;
	}

	 if(level=="STATE"||level=="state"||level=="State")
	 {
	cout<<"5) -->You avail Rs.  25000 scholarship on the basis of sport Quota"<<endl;
	a[4]=25000;
 	}
	else if(level=="NATIONAL"||level=="national"||level=="National")
	{
	cout<<"5) -->You avail Rs. 45000 scholarship on the basis of sport Quota"<<endl;	
	a[4]=45000;
 	}
}
//LOGO 
void stud::logo()
		{
	cout<<"    -------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"    *******************************************LOVELY PROFFESIONAL UNIVERSITY************************************"<<endl;
	cout<<"    **************************************************Welcomes You***********************************************"<<endl;
	cout<<"    -------------------------------------------------------------------------------------------------------------"<<endl;
};
//overall/net scholarship
void stud::netscholarship()
{
	for(i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<endl<<"6) ---> According to your marks and other criteria you finally avail net scolarship of worth RS. "<<a[0]<<endl;
}
//writing details into file
void stud::file()
{
	ofstream f1("K1609_47.txt",ios::app);
	f1<<"Student Name: "<<name<<endl;
	f1<<"Student's Father Name: Mr. "<<fname<<endl;
	f1<<"Student's Mother Name: Mrs. "<<mname<<endl;
	f1<<"Student's Sex: "<<sex<<endl;
	f1<<"Student's state: "<<state<<endl;
	f1<<"Student's Caste: "<<caste<<endl;
	f1<<"Student's Jee Main Marks: "<<marks<<endl;
	f1<<"Student's 12th Class Percentage: "<< per <<"%"<<endl;
	if(condition=="yes"||condition=="YES"||condition=="Yes")
	{
	f1<<"student interested game:"<<game<<endl;
	f1<<"student played "<<game<<" at "<<level<<" level"<<endl;
	}
	f1<<"Student's Stream: "<<course<<endl;
	f1<<"scholarship avail by student is: Rs.  "<<a[0]<<endl;
	f1.close();
};
//main 
 main()
{
	for(int i=0;i<8;i++) //adding color to console
	{
		
			system("COLOR 9f");
			system("cls");
			system("COLOR 2f");
			system("cls");	
			system("COLOR 3f");
			system("cls");
			system("COLOR 5f");
			system("cls");
    }//addition of color is done
	stud student;
	student.logo();
	student.read_data() ;	
	student.feedecription() ;
	student.fbackground() ;
	student.jeemain();
	student.class12th_marks() ;
	student.locality() ;
	student.games() ; 
	student.netscholarship();
	student.file();
}

