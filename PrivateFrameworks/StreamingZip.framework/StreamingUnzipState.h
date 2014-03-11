/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSDictionary, NSMutableData, NSString;

@interface StreamingUnzipState : NSObject {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    struct { 
        int hashType; 
        union { 
            struct CC_MD5state_st { 
                unsigned int A; 
                unsigned int B; 
                unsigned int C; 
                unsigned int D; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                int num; 
            } md5; 
            struct CC_SHA1state_st { 
                unsigned int h0; 
                unsigned int h1; 
                unsigned int h2; 
                unsigned int h3; 
                unsigned int h4; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                int num; 
            } sha1; 
            struct CC_MD2state_st { 
                int num; 
                unsigned char data[16]; 
                unsigned int cksm[16]; 
                unsigned int state[16]; 
            } md2; 
            struct CC_MD4state_st { 
                unsigned int A; 
                unsigned int B; 
                unsigned int C; 
                unsigned int D; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                unsigned int num; 
            } md4; 
            struct CC_SHA256state_st { 
                unsigned int count[2]; 
                unsigned int hash[8]; 
                unsigned int wbuf[16]; 
            } sha224; 
            struct CC_SHA256state_st { 
                unsigned int count[2]; 
                unsigned int hash[8]; 
                unsigned int wbuf[16]; 
            } sha256; 
            struct CC_SHA512state_st { 
                unsigned long long count[2]; 
                unsigned long long hash[8]; 
                unsigned long long wbuf[16]; 
            } sha384; 
            struct CC_SHA512state_st { 
                unsigned long long count[2]; 
                unsigned long long hash[8]; 
                unsigned long long wbuf[16]; 
            } sha512; 
        } context; 
    unsigned long long _bytesHashedInChunk;
    unsigned long _currentCRC32;
    BOOL _currentLFIsStreamMetadata;
    unsigned short _currentLFMode;
    struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; } *_currentLFRecord;
    unsigned long _currentLFRecordAllocationSize;
    unsigned long long _currentOffset;
    int _currentOutputFD;
    } _hashContext;
    unsigned long long _hashedChunkSize;
    NSArray *_hashes;
    NSMutableData *_incompleteData;
    unsigned char _lastBlockEndLastByte;
    unsigned char _lastBlockEndNumUnusedBits;
    NSString *_lastChunkPartialHash;
    unsigned long long _lastResumptionSavedOffset;
    unsigned long long _outputFileOffsetAtLastBlockEnd;
    unsigned long long _recordsProcessed;
    NSDictionary *_streamInfoDict;
    unsigned char _streamState;
    unsigned long long _thisStageBytesComplete;
    unsigned long long _totalRecordCount;
    unsigned long long _uncompressedBytesOutput;
    NSMutableData *_unfinishedCompressedData;
    NSMutableData *_unsureData;
    NSString *_unzipPath;
    } _zlibState;
}

@property(readonly) unsigned long long bytesHashedInChunk;
@property unsigned long currentCRC32;
@property BOOL currentLFIsStreamMetadata;
@property unsigned short currentLFMode;
@property struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }* currentLFRecord;
@property unsigned long currentLFRecordAllocationSize;
@property unsigned long long currentOffset;
@property int currentOutputFD;
@property(readonly) struct { int x1; union { struct CC_MD5state_st { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7[16]; int x_1_2_8; } x_2_1_1; struct CC_SHA1state_st { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8[16]; int x_2_2_9; } x_2_1_2; struct CC_MD2state_st { int x_3_2_1; unsigned char x_3_2_2[16]; unsigned int x_3_2_3[16]; unsigned int x_3_2_4[16]; } x_2_1_3; struct CC_MD4state_st { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; unsigned int x_4_2_7[16]; unsigned int x_4_2_8; } x_2_1_4; struct CC_SHA256state_st { unsigned int x_5_2_1[2]; unsigned int x_5_2_2[8]; unsigned int x_5_2_3[16]; } x_2_1_5; struct CC_SHA256state_st { unsigned int x_6_2_1[2]; unsigned int x_6_2_2[8]; unsigned int x_6_2_3[16]; } x_2_1_6; struct CC_SHA512state_st { unsigned long long x_7_2_1[2]; unsigned long long x_7_2_2[8]; unsigned long long x_7_2_3[16]; } x_2_1_7; struct CC_SHA512state_st { unsigned long long x_8_2_1[2]; unsigned long long x_8_2_2[8]; unsigned long long x_8_2_3[16]; } x_2_1_8; } x2; } hashContext;
@property(readonly) unsigned long long hashedChunkSize;
@property(retain) NSMutableData * incompleteData;
@property(retain) NSString * lastChunkPartialHash;
@property unsigned long long recordsProcessed;
@property(retain) NSDictionary * streamInfoDict;
@property unsigned char streamState;
@property unsigned long long thisStageBytesComplete;
@property unsigned long long totalRecordCount;
@property unsigned long long uncompressedBytesOutput;
@property(retain) NSMutableData * unfinishedCompressedData;
@property(retain) NSMutableData * unsureData;
@property(readonly) NSString * unzipPath;
@property(readonly) struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; }* zlibState;

+ (id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; }*)zlibState;
- (void).cxx_destruct;
- (id)_checkHashForOffset:(unsigned long long)arg1;
- (void)_internalSetStreamState:(unsigned char)arg1;
- (unsigned long long)bytesHashedInChunk;
- (id)checkLastChunkPartialHash;
- (void)clearSavedState;
- (unsigned long)currentCRC32;
- (BOOL)currentLFIsStreamMetadata;
- (unsigned short)currentLFMode;
- (struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)currentLFRecord;
- (unsigned long)currentLFRecordAllocationSize;
- (unsigned long long)currentOffset;
- (int)currentOutputFD;
- (void)dealloc;
- (id)finishStream;
- (struct { int x1; union { struct CC_MD5state_st { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7[16]; int x_1_2_8; } x_2_1_1; struct CC_SHA1state_st { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8[16]; int x_2_2_9; } x_2_1_2; struct CC_MD2state_st { int x_3_2_1; unsigned char x_3_2_2[16]; unsigned int x_3_2_3[16]; unsigned int x_3_2_4[16]; } x_2_1_3; struct CC_MD4state_st { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; unsigned int x_4_2_7[16]; unsigned int x_4_2_8; } x_2_1_4; struct CC_SHA256state_st { unsigned int x_5_2_1[2]; unsigned int x_5_2_2[8]; unsigned int x_5_2_3[16]; } x_2_1_5; struct CC_SHA256state_st { unsigned int x_6_2_1[2]; unsigned int x_6_2_2[8]; unsigned int x_6_2_3[16]; } x_2_1_6; struct CC_SHA512state_st { unsigned long long x_7_2_1[2]; unsigned long long x_7_2_2[8]; unsigned long long x_7_2_3[16]; } x_2_1_7; struct CC_SHA512state_st { unsigned long long x_8_2_1[2]; unsigned long long x_8_2_2[8]; unsigned long long x_8_2_3[16]; } x_2_1_8; } x2; })hashContext;
- (unsigned long long)hashedChunkSize;
- (id)incompleteData;
- (id)init;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)lastChunkPartialHash;
- (void)markResumptionPoint;
- (void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1;
- (unsigned long long)recordsProcessed;
- (id)serializeState;
- (void)setCurrentCRC32:(unsigned long)arg1;
- (void)setCurrentLFIsStreamMetadata:(BOOL)arg1;
- (void)setCurrentLFMode:(unsigned short)arg1;
- (void)setCurrentLFRecord:(struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)arg1;
- (void)setCurrentLFRecordAllocationSize:(unsigned long)arg1;
- (void)setCurrentOffset:(unsigned long long)arg1;
- (void)setCurrentOutputFD:(int)arg1;
- (void)setIncompleteData:(id)arg1;
- (void)setLastChunkPartialHash:(id)arg1;
- (void)setRecordsProcessed:(unsigned long long)arg1;
- (void)setStreamInfoDict:(id)arg1;
- (void)setStreamState:(unsigned char)arg1;
- (void)setThisStageBytesComplete:(unsigned long long)arg1;
- (void)setTotalRecordCount:(unsigned long long)arg1;
- (void)setUncompressedBytesOutput:(unsigned long long)arg1;
- (void)setUnfinishedCompressedData:(id)arg1;
- (void)setUnsureData:(id)arg1;
- (id)streamInfoDict;
- (unsigned char)streamState;
- (unsigned long long)thisStageBytesComplete;
- (unsigned long long)totalRecordCount;
- (unsigned long long)uncompressedBytesOutput;
- (id)unfinishedCompressedData;
- (id)unsureData;
- (id)unzipPath;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 onlyFinishCurrentChunk:(BOOL)arg4;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3;

@end
