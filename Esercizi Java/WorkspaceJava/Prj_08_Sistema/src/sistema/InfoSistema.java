package sistema;

import java.io.File;
import java.io.PrintStream;
import java.util.Properties;

public class InfoSistema {

	public static void main(String[] args) {

		Properties properties = System.getProperties();

		try {

			PrintStream output = new PrintStream(new File("proprieta.txt"));

		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
