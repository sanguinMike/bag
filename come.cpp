  } else if(keyword == "v") {
            ++positionIndexOffset;
            thisIsFirstMeshAndItHasNoData = false;
        } else if(keyword == "vt") {
            ++textureCoordinateIndexOffset;
            thisIsFirstMeshAndItHasNoData = false;
        } else if(keyword == "vn") {
            ++normalIndexOffset;
            thisIsFirstMeshAndItHasNoData = false;

UnsignedInt ObjImporter::doMeshCount() const { return _file->meshes.size(); }

Int ObjImporter::doMeshForName(const Containers::StringView name) {
    const auto it = _file->meshesForName.find(name);
    return it == _file->meshesForName.end() ? -1 : it->second;
}

Containers::String ObjImporter::doMeshName(UnsignedInt id) {
    return _file->meshNames[id];
}
//good
     const std::size_t keywordEnd = line.find(' ');
        const std::string keyword = line.substr(0, keywordEnd);
        const std::string contents = keywordEnd != std::string::npos ?
            Utility::String::ltrim(line.substr(keywordEnd+1)) : "";
