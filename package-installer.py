import json
import pip
input = {}
#Writing the dependencies first
input['Dependencies']=[]
input['Dependencies'].extend(['beautifulsoup4==4.4.1','boto==2.48.0','bz2file==0.98','certifi==2017.7.27.1','chardet==3.0.4','gensim==2.3.0','html5lib==0.999','idna==2.5','nltk==3.2.4','numpy==1.13.1','pexpect==4.0.1','pip==9.0.1']);

#Creating the json file
with open('input.txt','w') as outfile:
    json.dump(input,outfile)

# now reading the json file since input is a json file only

with open('input.txt','r') as inpfile:
    dependencies = json.load(inpfile)
    #Installing the packages
    for pack in dependencies['Dependencies']:
        #print(pack)
        try:
            pip.main(['install', pack])
            print("Package named: ",pack, " installed successfully")
        except [SystemExit,SystemError,OSError] as s:
            print("Package named: ",pack, " could not be installed!")
            pass

