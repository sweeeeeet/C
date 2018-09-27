package cn.booksystem;

import java.util.Scanner;

public class Menu {
Scanner scan=new Scanner(System.in);
 Date date=new Date();
 Admain admin=new Admain();
 Book[] bs=new Book[50];
 Book[] jieyue=new Book[50];
 int m=0;
 
 
 public void chuanData(){
	 bs=date.init();
 }
 
 
public void welecome(){
	System.out.println("欢迎来到图书管理系统：");
	System.out.println("\t1.登录系统\n");
	System.out.println("\t2.退出\n");
	
	int ok=scan.nextInt();
	switch (ok) {
	case 1:
		this.denglu();
	case 2:
		System.exit(0);
		break;
	default:
		System.out.println("输入数字错误，请重输");
	}
}
	public void denglu(){
		System.out.println("欢迎来到mini图书系统");
		System.out.println("********************************");
	
	int count=3;
	boolean flag=true;
	do{
		System.out.println("请输入用户名");
		String uname=scan.next();
		System.out.println("请输入密码");
		String upass=scan.next();
		if(uname.equals(admin.username)&&upass.equals(admin.password)){
			this.mainMenu();
		flag=false;
		}else{
		count--;
		if(count==0){
			System.out.println("您输入错误的次数超过三次");
			System.out.println("请明天尝试");
			System.exit(0);
		}
		System.out.println("您还有"+count+"次机会");}
	
	}while(flag);
	}
	
	public void mainMenu() {
		System.out.println("\t欢迎 mini图书管理系统2.0版 >> 主菜单\n");
		System.out.println("******************************************\n");
		System.out.println("\t\t1. 浏  览  图  书\n");
		System.out.println("\t\t2. 借  阅  图  书\n");
		System.out.println("\t\t3. 归  还  图  书\n");
		System.out.println("\t\t4. 填  加  图  书\n");
		System.out.println("\t\t5. 查  找  图  书\n");
		System.out.println("\t\t6. 借  阅  明  细\n");
		System.out.println("\t\t7. 删  除  图  书\n");
		System.out.println("\t\t8. 修  改  图  书\n");
		System.out.println("\t\t9. 退             出\n");
		System.out.println("******************************************\n");
		System.out.println("请选择，输入数字 ：\n");
		int ok = scan.nextInt();
		switch (ok) {
		case 1:
			liulan();
			break;
		case 2:
			jieyue();
			break;
		case 3:
			guihuan();
			break;
		case 4:
			tianjia();
			break;
		case 5:
			chazhao();
			break;
		case 6:
			jieyueDetail();
			break;
		case 7:
			shanchu();
			break;
		case 8:
			xiugai();
			break;
		case 9:
			System.out.println("谢谢使用");
			System.exit(0);
			break;
			
		default:
			System.out.println("输入编号有误，请重新输入");
			
		}
	}
		public void xiugai() {
			System.out.println("mini图书管理系统  >>  修  改  图  书\n");
			System.out.println("---------------------------------------------");
		System.out.println("请输入要修改的图书编号");
		int id=scan.nextInt();
		for (int i = 0; i < bs.length; i++) {
		
			if(bs[i]!=null)
				if(bs[i].id==id){
				System.out.println("请输入要修改的图书名称");
				String name=scan.next();
				bs[i].name=name;
				System.out.println("请输入要修改的图书状态（0.不可借阅或1.可借阅）");
				int state=scan.nextInt();
				bs[i].state=state;
				System.out.println("修改成功");
				}else
					System.out.println("无此图书，请核查后输入");
			
			
		}
		returnMenu();
	}


		private void shanchu() {
			System.out.println("mini图书管理系统  >>    删  除  图  书\n");
			System.out.println("---------------------------------------------");
		System.out.println("请输入要删除的图书编号");
		int id=scan.nextInt();
		if(bs[id]!=null){
			bs[id]=null;
			System.out.println("删除成功");
		}else{
			System.out.println("输入编号有误");
			
		}
		
		returnMenu();
	}


		private void jieyueDetail() {
			System.out.println("mini图书管理系统  >>  借  阅  明  细\n");
			System.out.println("---------------------------------------------");
			System.out.println("图书编号\t\t图书名称\t\t借阅状态");
		for (int i = 0; i < jieyue.length; i++) {
			if(jieyue[i]!=null)
				System.out.println(jieyue[i].toString());
		}
		returnMenu();
	}


		private void chazhao() {
			System.out.println("mini图书管理系统  >>  查   找   图  书\n");
			System.out.println("---------------------------------------------");
			System.out.println("1.按图书id查找2.按书名查找");
			int choice=scan.nextInt();
			switch (choice) {
			case 1:
				idchazhao();
				break;
			case 2:
				namechazhao();
				break;
			default:
				System.out.println("输入数字错误，请重输");
				break;
			}
			}


			public void namechazhao() {
				System.out.println("---------------------------------");
				System.out.println("请输入图书名称");
			String name=scan.next();
			boolean flag=false;
			for(int i=0;i < bs.length; i++) {
				if(bs[i]!=null){
					if(bs[i].name.equals(name)){
						
							System.out.println("图书名称"+bs[i].toString());
					
							flag=false;
							break;
						
					}
		            }
				}
			if(flag){
				System.out.println("输入错误请重输");
				returnMenu();
			}
			}


			public void idchazhao(){
				System.out.println("---------------------------------");
				System.out.println("请输入图书编号");
				int id=scan.nextInt();
				boolean flag =false;
				for (int i = 0; i < bs.length; i++) {
					if(bs[i]!=null){
						if(bs[i].id==id){
							
								System.out.println(bs[i].toString());
								flag=false;
								break;
							
						}
					}
					
				}
				if(flag){
					System.out.println("输入错误请重输");
					returnMenu();
				}
				returnMenu();
			}
	


		private void tianjia() {
			System.out.println("mini图书管理系统  >>  添   加  图  书\n");
			System.out.println("---------------------------------------------");
		
			System.out.println("请输入图书名称：");
			String name=scan.next();
			for (int i = 0; i < bs.length; i++) {
				if(bs[i]==null){
				Book b=new Book();
				b.id=i+1;
				b.name=name;
				b.state=1;
				bs[i]=b;}
			}
			System.out.println("添加"+name+"成功");
			System.out.println("---------------------------");
			returnMenu();
	}


		private void guihuan() {
			System.out.println("mini图书管理系统  >>  归   还   图  书\n");
			System.out.println("---------------------------------------------");	
			System.out.println("请输入图书编号：");
			int id=scan.nextInt();
			boolean flag=false;
			for (int i = 0; i < bs.length; i++) {
				if(bs[i]!=null)
					if(bs[i].state==0){
					  if(bs[i].id==id){
						System.out.println(bs[i].name+"归还成功");
				         bs[i].state=1;
				      for (int j = 0; j < jieyue.length; j++) {
						if(jieyue[j]!=null)
							if(jieyue[j].id==id)
								jieyue[j]=null;
					
						break;		
					}   
				      flag=true;
					  }
					}else{
						flag=true;
						System.out.println("此书未被借出不需归还");
					}
			}
			if(flag==false){
				System.out.println("无此图书");
			       this.mainMenu();	
			}
			System.out.println("---------------------------");
			returnMenu();
		
	}


		public void liulan(){
		System.out.println("mini图书管理系统");
		System.out.println("----------------------------");
		for(int i=0;i<bs.length;i++){
			if(bs[i]!=null);{
				System.out.println(bs[i].toString());}
		}
		System.out.println("---------------------------");
		returnMenu();
	}
		
	public void returnMenu(){
		String ok;
		System.out.println("返回上一级（y/n）");
		do{
			ok=scan.next();
			mainMenu();
		}while("n".equals(ok));
			System.out.println("输入有误");
			}
		
	
public void jieyue() {
	System.out.println("mini图书管理系统  >>  借  阅   图  书\n");
	System.out.println("---------------------------------------------");
	System.out.println("请输入借阅方式（1.id借阅2.书名借阅）");
	int choice=scan.nextInt();
	switch (choice) {
	case 1:
		idjieyue();
		break;
	case 2:
		namejieyue();
		break;
	default:
		System.out.println("输入数字错误，请重输");
		break;
	}
	
	}


	public void namejieyue() {
		System.out.println("---------------------------------------------");
		System.out.println("请输入借阅书名");
	String name=scan.next();
	boolean flag=true;
	for(int i=0;i < bs.length; i++) {
		if(bs[i]!=null){
			if(bs[i].name.equals(name)){
				if(bs[i].state==1){
					System.out.println("借阅《"+bs[i].name+"》成功");
					bs[i].state=0;
					jieyue[m++]=bs[i];
					flag=false;
					break;
				}
			}
}else {
	flag = false;
	System.out.println("该《" + bs[i].name + "》已被借出，当前不可借阅");
	break;
  }
		}
	if(flag){
		System.out.println("输入错误请重输");
	}
	returnMenu();
	}


	public void idjieyue(){
		System.out.println("---------------------------------------------");
		System.out.println("请输入图书编号");
		int id=scan.nextInt();
		boolean flag =false;
		for (int i = 0; i < bs.length; i++) {
			if(bs[i]!=null){
				if(bs[i].id==id){
					if(bs[i].state==1){
						System.out.println("借阅《"+bs[i].name+"》成功");
						bs[i].state=0;
						jieyue[m++]=bs[i];
						flag=false;
						break;
					}else{
						flag = false;
    					System.out.println("该《" + bs[i].name + "》已被借出，当前不可借阅");
    					break;
					}
				}
			}
			
		}
		if(flag){
			System.out.println("输入错误请重输");
		}
		
		returnMenu();
	}
	
	
}
		
		
		


