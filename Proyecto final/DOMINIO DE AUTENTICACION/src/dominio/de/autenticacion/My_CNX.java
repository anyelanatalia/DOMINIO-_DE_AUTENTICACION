
package dominio.de.autenticacion;

import com.mysql.cj.jdbc.MysqlDataSource;
import java.sql.Connection;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;


public class My_CNX {
    
    private static final String servername = "localhost";
    private static final String username = "root";
    private static final String dbname = "users_db";
    private static final Integer portnumber = 3306;
    private static final String password = "";
    
    
   public static Connection getConnection()
           
    
    {
        Connection cnx = null;
        
        MysqlDataSource datasource = new MysqlDataSource();
        String servername = null;
        
        datasource.setServerName(servername);
        datasource.setUser(username);
        datasource.setPassword(password);
        datasource.setDatabaseName(dbname);
        datasource.setPortNumber(portnumber);
        
        try {
            cnx = datasource.getConnection();
            
        } catch (SQLException ex) {
            Logger.getLogger(" Get Connection -> " + My_CNX.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        return cnx;
        
        
    }
            
            
    
}


