<html>
	<head>
	</head>
		<body>
			<form method="POST">
				<h3> Enter Value for Check: </h3>
				<input type="text" name="no1">
                <input type="submit" name="pn" value="Check">			
			</form>
			<?php
				if(isset($_POST['pn'])){
					$a=$_POST['no1'];
					if($a<0){
                        echo "$a"."is Negative value";
                    }
                    else if($a>0){
                         echo "$a"."Positive value";
                    }
                    else{
                     echo "value is Zero";
                    }
				}
                
			?>
		</body>
</html>