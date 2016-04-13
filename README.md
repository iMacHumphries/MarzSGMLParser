# MarzSGMLParser
iOS SGML Parser. Useful for OFX API.

######Example Data
```
<OFX>
  <INVACCTFROM>
    <BROKERID>Fidelity Investments
    <ACCTID>FidRoth
  </INVACCTFROM>
</OFX>
```


######Example Usage
```
SGMLParser *parser = [[SGMLParser alloc] init];
NSDictionary *dictionary = [parser parseXMLString:result];
NSLog(@"%@", [[dict valueForKeyPath:@"OFX.INVACCTFROM.BROKERID"]);
```
