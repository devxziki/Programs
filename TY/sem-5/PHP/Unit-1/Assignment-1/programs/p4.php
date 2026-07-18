<!-- 4. Write a PHP script to check whether a given number is greater than 100, less than 100 or equal to 100. -->
 <html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value To check Value is Greater Then or Less then or Equal to 100: </h3>
				Enter Value <input type="text" name="no1">
                <input type="submit" name="pn" value="Check">			
			</form>
			<?php
				if(isset($_POST['pn'])){
					$a=$_POST['no1'];
					if($a<100){
                        echo "$a"."-> Less Then 100 ";
                    }
                    else if($a>100){
                         echo "$a"."-> Greater Then 100";
                    }
                    else{
                     echo "value is Equal To 100";
                    }
				}
                
			?>
		</body>
</html>