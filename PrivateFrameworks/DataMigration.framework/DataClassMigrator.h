/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject {
    NSDictionary *_context;
    BOOL _didUpgrade;
}

@property(retain) NSDictionary * context;
@property(readonly) BOOL didMigrateBackupFromDifferentDevice;
@property(readonly) BOOL didRestoreFromBackup;
@property(readonly) BOOL didRestoreFromCloudBackup;
@property BOOL didUpgrade;
@property(readonly) BOOL shouldPreserveSettingsAfterRestore;
@property(readonly) BOOL wasPasscodeSetInBackup;

- (void).cxx_destruct;
- (id)context;
- (id)dataClassName;
- (BOOL)didMigrateBackupFromDifferentDevice;
- (BOOL)didRestoreFromBackup;
- (BOOL)didRestoreFromCloudBackup;
- (BOOL)didUpgrade;
- (float)estimatedDuration;
- (float)migrationProgress;
- (BOOL)performMigration;
- (void)setContext:(id)arg1;
- (void)setDidUpgrade:(BOOL)arg1;
- (BOOL)shouldPreserveSettingsAfterRestore;
- (BOOL)wasPasscodeSetInBackup;

@end
