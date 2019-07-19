//1.User模型

public class User{

	private int id;//用户编号
	private String username;//用户名
	private String password;//用户密码
	private String gender;//用户性别
	private String email;//用户邮箱
	private String telephone;//用户电话
	private String introduce;//用户介绍
	private String activeCode;//激活码
	private String role;//用户角色
	private int state;//用户状态
	private Date registTime;//注册时间
}

//2.接收请求参数，本段代码包含异常处理

@WebServlet("/register")
public class RegisterServlet extends HttpServlet/*HttpServlet是处理Http协议*/{

	@Override.   //@Override 的作用是：如果想重写父类的方法，比如toString()方法的话，在方法前面加上@Override 系统可以帮你检查方法的正确性。
	protected void dopost(HttpServletRequest request, HttpServletPesponse response)  //HttpServletRequest对象代表客户端的请求，当客户端通过HTTP协议访问服务器时，HTTP请求头中的所有信息都封装在这个对象中，通过这个对象提供的方法，可以获得客户端请求的所有信息。


	throws ServletException,IOException{       //抛出异常
		//1.把参数封装成Bean
		User user=new User();
		try{         
			BeanUtils.populate(user,request.getParameterMap());
			System.out.println(user);
		}catch(IllegalAccessException/*从非序列继承*/|InvocationTargetException e){
			e.printStackTrace();
		}
	}
}


//3.请求添加编码的Filter

public class MyEncodingFilter implements Filter{

	@Override
	public void init(FilterConfig FilterConfig)throws ServletException{}
	@Override
	public void destroy(){}

	@Override
	public void doFilter(HttpServletRequest,ServletResponse response,FilterChain chain)
	throws IOException,ServletException{
		//1.设置POST请求中文乱码的问题
		request.setCharacterEncoding("UTF-8");
		System.out.println("拦截请求："+request);


		//2.解决get请求的中文乱码问题
		//request:requestFacade;
		HttpServletRequest Hsr=(HttpServletRequest)request;
	}

}





















