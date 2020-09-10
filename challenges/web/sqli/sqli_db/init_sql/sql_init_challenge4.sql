USE $MYSQL_DATABASE;

DROP TABLE IF EXISTS challenge4;
CREATE TABLE challenge4 (
	id INT AUTO_INCREMENT PRIMARY KEY,
	flag VARCHAR(128) NOT NULL
);

DROP USER IF EXISTS '$CHALLENGE4_USER';
CREATE USER '$CHALLENGE4_USER'@'%' IDENTIFIED BY '$CHALLENGE4_USER_PASS';

GRANT USAGE,SELECT ON ${MYSQL_DATABASE}.challenge4 TO ${CHALLENGE4_USER};

INSERT INTO challenge4 (flag) VALUES
	("FLAG-=+.I.U{7V$?rl!/p_Three_Tables_for_the_Elven-admins_under_the_RDBMS_f2@1_.V)qu_!;:{P,");
