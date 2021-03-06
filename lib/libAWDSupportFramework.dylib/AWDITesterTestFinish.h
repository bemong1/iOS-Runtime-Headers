/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterTestFinish : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int testStatus : 1; 
    } _has;
    NSString *_testName;
    unsigned int _testStatus;
    unsigned long long _timestamp;
    NSString *_uniqueKey;
}

@property (nonatomic, readonly) BOOL hasTestName;
@property (nonatomic) BOOL hasTestStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUniqueKey;
@property (nonatomic, retain) NSString *testName;
@property (nonatomic) unsigned int testStatus;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uniqueKey;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTestName;
- (BOOL)hasTestStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasUniqueKey;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTestStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTestName:(id)arg1;
- (void)setTestStatus:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueKey:(id)arg1;
- (id)testName;
- (unsigned int)testStatus;
- (unsigned long long)timestamp;
- (id)uniqueKey;
- (void)writeTo:(id)arg1;

@end
