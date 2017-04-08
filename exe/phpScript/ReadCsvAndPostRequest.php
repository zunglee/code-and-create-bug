<?php


$csvFileDir = "/home/ankitesh/Downloads/leadsToCheck.csv";
$filePtr = fopen($csvFileDir,'r');

if($filePtr == FALSE){
    echo "could not open file . Check for errors\n";
    die('Thanks');
}

extractData($filePtr);

fclose($filePtr);

function postData($data){


$data = preparaPostData($data);
$url = 'http://learning.infoedge.com:8080/listingQueryForm';
//$options = array('http' => array('header' => "User-Agent:MyAgent/1.0\r\n"));

$options = array(
        'http' => array(
        'header'  => "Content-type: application/x-www-form-urlencoded\r\n",
        'method'  => 'POST',
        'content' => http_build_query($data),
    )
);

$opts = array('http' => array(
    'method' => "POST",
    'header' => "User-Agent Mozilla/5.0 (Windows NT 6.1; WOW64; rv:24.0) Gecko/20100101 Firefox/24.0\r\n"
    . "Accept:text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n"
    . "Accept-Encoding:gzip, deflate\r\n"
    . "Accept-Language:cs,en-us;q=0.7,en;q=0.3\r\n"
    . "Connection:keep-alive\r\n"
    . "Host:your.domain.com\r\n"
    ));

$context  = stream_context_create($options);
$result = file_get_contents($url, FALSE, $context);





var_dump($result);
die(' send ');
}


function extractData($filePtr){

$ct = 0;
 while($data = fgetcsv($filePtr , 1000)){  
if ($ct == 0 ){ $ct++;continue ;}   
    print_r( $data);
 die('here in the ');   
}
}



function preparaPostData($data){
return array(
	'NAME'=>$data[1],
	'CONT_NO'=>$data[2],
	'EMAIL'=>$data[3],
	'COMMENTS'=>$data[4],
	'SOURCE_ID'=>$data[5],
	'COURSE_ID'=>$data[7],
	'INTERESTED_COURSE'=>'testing Lead Filtering Logic',
	'download brochure'=>'',
);

}
?>
